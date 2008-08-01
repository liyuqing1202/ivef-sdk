
#include "msg_loginresponse.h"

MSG_LoginResponse::MSG_LoginResponse() {

}

MSG_LoginResponse::MSG_LoginResponse(const MSG_LoginResponse &val) : QObject() {

    m_header = ((MSG_LoginResponse)val).getHeader();
    m_body = ((MSG_LoginResponse)val).getBody();
}

MSG_LoginResponse & MSG_LoginResponse::operator=(const MSG_LoginResponse &/*val*/) {

    return *this;
}

void MSG_LoginResponse::setHeader(Header val) {

    m_header = val;
}

Header MSG_LoginResponse::getHeader() {

    return m_header;
}

void MSG_LoginResponse::setBody(Body val) {

    m_body = val;
}

Body MSG_LoginResponse::getBody() {

    return m_body;
}

QString MSG_LoginResponse::toXML() {

    QString xml = "<MSG_LoginResponse";
    xml.append(">\n");
    xml.append( m_header.toXML() );
    xml.append( m_body.toXML() );
    xml.append( "<MSG_LoginResponse />\n");
    return xml;
}
