
#include "IVEFServiceRequest.h"

ServiceRequest::ServiceRequest() {

}

ServiceRequest::ServiceRequest(const ServiceRequest &val) : QObject() {

    m_areas = val.m_areas;
    m_transmission = val.m_transmission;
    m_items = val.m_items;
    m_filter = val.m_filter;
}

ServiceRequest & ServiceRequest::operator=(const ServiceRequest &val) {

    m_areas = val.m_areas;
    m_transmission = val.m_transmission;
    m_items = val.m_items;
    m_filter = val.m_filter;
    return *this;
}

QString ServiceRequest::encode( QString str) {

    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

void ServiceRequest::addArea(Area val) {

    m_areas.append(val);
}

Area ServiceRequest::getAreaAt(int i) const {

    return m_areas.at(i);
}

int ServiceRequest::countOfAreas() const {

    return m_areas.count();
}

void ServiceRequest::setTransmission(Transmission val) {

    m_transmission = val;
}

Transmission ServiceRequest::getTransmission() const {

    return m_transmission;
}

void ServiceRequest::addItem(Item val) {

    m_items.append(val);
}

Item ServiceRequest::getItemAt(int i) const {

    return m_items.at(i);
}

int ServiceRequest::countOfItems() const {

    return m_items.count();
}

void ServiceRequest::setFilter(Filter val) {

    m_filter = val;
}

Filter ServiceRequest::getFilter() const {

    return m_filter;
}

QString ServiceRequest::toXML() {

    QString xml = "<ServiceRequest";
    xml.append(">\n");
    for(int i=0; i < m_areas.count(); i++ ) {
        Area attribute = m_areas.at(i);
        xml.append( attribute.toXML() );
    }
    xml.append( m_transmission.toXML() );
    for(int i=0; i < m_items.count(); i++ ) {
        Item attribute = m_items.at(i);
        xml.append( attribute.toXML() );
    }
    xml.append( m_filter.toXML() );
    xml.append( "</ServiceRequest>\n");
    return xml;
}

QString ServiceRequest::toString(QString lead) {

    QString str = lead + "ServiceRequest\n";
    for(int i=0; i < m_areas.count(); i++ ) {
       Area attribute = m_areas.at(i);
       str.append( attribute.toString(lead + "    ") );
    }
    str.append( m_transmission.toString(lead + "    ") );
    for(int i=0; i < m_items.count(); i++ ) {
       Item attribute = m_items.at(i);
       str.append( attribute.toString(lead + "    ") );
    }
    str.append( m_filter.toString(lead + "    ") );
    return str;
}
