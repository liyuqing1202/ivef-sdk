/* 
 *  ObjectDatas
 *
 *  ObjectDatas is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Wed Jan 6 14:24:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __OBJECTDATAS_H__
#define __OBJECTDATAS_H__

#include <QtCore>
#include "IVEFObjectData.h"

//-----------------------------------------------------------
//! \brief       Class definition of ObjectDatas
//!
//! 
//!

class ObjectDatas : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    ObjectDatas();
    //!copy constructor
    //!
    ObjectDatas(const ObjectDatas&);
    //!= operator
    //!
    ObjectDatas & operator=(const ObjectDatas&/*val*/);
    //!              adds a ObjectData.
    //!
    void addObjectData(ObjectData val);

    //!              gets the i-th ObjectData.
    //!
    ObjectData getObjectDataAt(int i) const;

    //!              return the number of ObjectData objects.
    //!
    //! \return     int
    int countOfObjectDatas() const;

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str);


private:
    QVector<ObjectData> m_objectDatas;

}; 

#endif

