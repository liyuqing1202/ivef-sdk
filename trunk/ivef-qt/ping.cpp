
#include "ping.h"

Ping::Ping() {

}

Ping::Ping(const Ping &val) : QObject() {

    m_timeStamp = val.m_timeStamp;
}

Ping & Ping::operator=(const Ping &val) {

    m_timeStamp = val.m_timeStamp;
    return *this;
}

void Ping::setTimeStamp(QDateTime val) {

    m_timeStamp = val;
}

QDateTime Ping::getTimeStamp() const {

    return m_timeStamp;
}

QString Ping::toXML() {

    QString xml = "<Ping";
    xml.append(" TimeStamp=\"" + m_timeStamp.toString("yyyy-MM-ddThh:mm:ss.zzz") + "\"");
    xml.append(">\n");
    xml.append( "</Ping>\n");
    return xml;
}
