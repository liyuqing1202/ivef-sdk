/* 
 *  Station
 *
 *  Station is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:29:01 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __STATION_H__
#define __STATION_H__

#include <QtCore>
#include "IVEF2reading.h"

class Station : public QObject { 
    Q_OBJECT

public:
    Station();
    Station(const Station&);
    Station & operator=(const Station&/*val*/);

    /* Reading:
       Reading from a hydrological or meteological sensor */
    void addReading(Reading val);
    Reading getReadingAt(int i) const;
    int countOfReadings() const;

    /* Id:
       Identifier of the station */
    void setId(int val);
    int getId() const;
    bool hasId();

    /* Name:
       Name of the station */
    void setName(QString val);
    QString getName() const;
    bool hasName();

    /* Forecast:
       indicates if this is a true measurement or a predicted forecast */
    void setForecast(bool val);
    bool getForecast() const;

    /* TimeStamp:
       Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sss) of the time this message is sent. */
    void setTimeStamp(QDateTime val);
    QDateTime getTimeStamp() const;

    /* Location:
       Location of the station */
    void setLocation(QString val);
    QString getLocation() const;
    bool hasLocation();
    QString toXML();
    QString toString(QString lead);

private:
    QVector<Reading> m_readings;
    int m_id;
    bool m_idPresent;
    QString m_name;
    bool m_namePresent;
    bool m_forecast;
    QDateTime m_timeStamp;
    QString m_location;
    bool m_locationPresent;

}; 

#endif
