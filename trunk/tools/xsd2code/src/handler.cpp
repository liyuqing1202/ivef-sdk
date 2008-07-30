/*
 *  Handler.cpp
 *
 *  xsd2code is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  Created by Lukassen on 11/06/08.
 *  Copyright 2008
 *
 */

#include "handler.h"

bool Handler::startDocument () {
    //std::cout << "SD" << std::endl;
	return true;
}

QVector<XSDObject*> Handler::objects() {
	return m_objects;
}

bool Handler::startElement (const QString & /* namespaceURI */,
                                const QString & /* localName */,
                                const QString & qName,
                                const QXmlAttributes & atts) {

    //std::cout << QString("SE: %1").arg(qName).toLatin1().data() << std::endl;
/*
    for (int i=0; i < atts.length(); i++) {
        QString key = atts.localName(i);
        QString value = atts.value(i);
        std::cout << QString("AT:    %1 = %2").arg(key, value).toLatin1().data() << std::endl;
    }
	*/
	if (qName == "xs:annotation") {
		// ignore
		//std::cout << QString("ignoring %1").arg(qName).toLatin1().data() << std::endl;
	} else if (qName == "xs:attribute") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		QString name = "unknown", type = "unknown";
		bool required = true;
		for (int i=0; i < atts.length(); i++) {
			QString key = atts.localName(i);
			QString value = atts.value(i);
			if (key == "name") { 
				name = value;
			} else if (key == "type") {
				type = value;			
			} else if (key == "use") {
				if (value == "optional") {
					required = false;
				}
			} else {
				std::cerr << QString("unexpected %1, %2 in tag %3").arg(key, value, qName).toLatin1().data() << std::endl;
			}
		}
		XSDObject *parent = m_objStack.top();
		XSDAttribute *attr = new XSDAttribute(name, type, required);
		parent->addAttribute(attr);
		m_attrStack.push(attr);
		
	} else if (qName == "xs:complexType") {
		// ignore, we will check for multiple attributes anyway
		//std::cout << QString("ignoring %1").arg(qName).toLatin1().data() << std::endl;
	} else if (qName == "xs:documentation") {
		//std::cout << QString("ignoring %1").arg(qName).toLatin1().data() << std::endl;

	} else if (qName == "xs:element") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;

		XSDObject *parent = NULL;

		if (m_objStack.size() > 0) {
			parent = m_objStack.top();
		}
		QString name, max, min;
		XSDObject *obj = new XSDObject("unknown");
		if (m_objStack.size() == 1) { // schema is level 0
			//std::cout << QString("setting root object on %1").arg(qName).toLatin1().data() << std::endl;
			obj->setRootObject();
		}
		m_objStack.push(obj); // mus always push, since we will always pop. if it was a reference we will leak here!
		bool hasMax = false, hasMin = false;
		for (int i=0; i < atts.length(); i++) {
			QString key = atts.localName(i);
			QString value = atts.value(i);
			if (key == "name") {  
				// new object (but name could occur multiple times)
				XSDObject *existingObj = NULL;
				for(int i=0; i < m_objects.size(); i++) {
					if (m_objects.at(i)->name() == value) {
						existingObj = m_objects.at(i); // append attributes to the old object, just as with a ref
						break;
					}
				}
				
				if (existingObj == NULL) {
					obj->setName(value);
					m_objects.append(obj); // only append new objects, references will be there anyway
				} else {
					// replace stack object with ref to other obj
					// this will result in a merged version of the object
					std::cout << QString("WARNING %1 reused, merging objects").arg(value).toLatin1().data() << std::endl;
					m_objStack.pop();
					m_objStack.push(existingObj);
					existingObj->setMerged();
				}
				name = value;
			} else if (key == "maxOccurs") {
				// parent can have maxOccurs objects of this object
				max = value;
				hasMax = true;			
			} else if (key == "minOccurs") {
				// parent can have maxOccurs objects of this object
				min = value;
				hasMin = true;

			} else if (key == "ref") {
				// not a new object but an reference to an existing one
				name = value;
			} else {
				std::cerr << QString("unexpected %1, %2 in tag %3").arg(key, value, qName).toLatin1().data() << std::endl;
			}
		}
		XSDAttribute *attr = new XSDAttribute(name, name, true); // keep name and type the same
		if (hasMax) {
			if (max == "unbounded") {
				attr->setUnbounded();
		   	} else {		
				attr->setMaxOccurs(max.toInt());
			}
		}
		if (hasMin) {
			attr->setMinOccurs(min.toInt());
		}
		if (parent != NULL) {
			parent->addAttribute(attr);
		}
		m_attrStack.push(attr);
	} else if (qName == "xs:enumeration") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->appendEnumeration(atts.value(0)); //  has only one attribute "value = xxx"
	} else if (qName == "xs:maxInclusive") { 
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setMaxOccurs(int(atts.value(0).toFloat())); // maxInclusive has only one attribute "value = xxx"
	} else if (qName == "xs:maxExclusive") { 
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setMaxOccurs(int(atts.value(0).toFloat()) - 1); 
	} else if (qName == "xs:minInclusive") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setMinOccurs(int(atts.value(0).toFloat())); // minInclusive has only one attribute "value = xxx"
	} else if (qName == "xs:minExclusive") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setMinOccurs(int(atts.value(0).toFloat())); // error in xsd should be +1 here but is float?
	} else if (qName == "xs:maxLength") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setMaxLength(atts.value(0).toInt()); // minInclusive has only one attribute "value = xxx"
	} else if (qName == "xs:restriction") {
		// get base class
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		XSDAttribute *attr = m_attrStack.top();
		attr->setType(atts.value(0)); // minInclusive has only one attribute "value = xxx"
	} else if (qName == "xs:schema") {
		//std::cout << QString("processing %1").arg(qName).toLatin1().data() << std::endl;
		// create a schema object
		// use this as collector object
		XSDObject *obj = new XSDObject("Schema");
		m_objects.append(obj);
		// though all objects are part of the schema it is better to not include them there
		// otherwise we have only one root object.
		//m_objStack.push(obj); 
		for (int i=0; i < atts.length(); i++) {
			QString key = atts.localName(i);
			QString value = atts.value(i);
			obj->addKeyWithValue(key, value);
		}
	} else if (qName == "xs:sequence") {
		// ignore
		//std::cout << QString("ignoring %1").arg(qName).toLatin1().data() << std::endl;
	} else if (qName == "xs:simpleType") {
		// ignore, we'll check for additional members anyway
		//std::cout << QString("ignoring %1").arg(qName).toLatin1().data() << std::endl;
	} else {
		std::cerr << QString("SE: %1 unknown").arg(qName).toLatin1().data() << std::endl;
		return false;
	}

    return true;
}

bool Handler::characters ( const QString  & ch ) {

    //std::cout << QString("CH:        [%1]").arg(ch.trimmed()).toLatin1().data() << std::endl;
	m_doc = ch.trimmed();
	return true;
}

bool Handler::endElement ( const QString & /* namespaceURI */,
						   const QString & /* localName */,
						   const QString & qName ) {
	//std::cout << QString("EE: %1").arg(qName).toLatin1().data() << std::endl;
	
	// pop elements previously been pushed
	if (qName == "xs:attribute") {
		m_attrStack.pop();
	} else if (qName == "xs:documentation") {
		XSDAttribute *attr = m_attrStack.top();
		attr->setDocumentation(m_doc);
	} else if (qName == "xs:element") {
		m_objStack.pop(); // pop the element
		m_attrStack.pop(); // pop the attribute of the parent
	} else if (qName == "xs:schema") {
		// though all objects are part of the schema it is better to not include them there
		// otherwise we have only one root object.
		//m_objStack.pop();
	} 
	
	return true;					
}
					  
bool Handler::endDocument () {

    //std::cout << "ED" << std::endl;
	return true;
}

bool Handler::error ( const QXmlParseException & exception ) {

    std::cout << exception.message().toLatin1().data() << std::endl;
    return true;
}
