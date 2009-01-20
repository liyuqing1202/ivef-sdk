/* 
 *  MSG_VesselData
 *
 *  MSG_VesselData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Jan 20 19:31:40 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __MSG_VESSELDATA_H__
#define __MSG_VESSELDATA_H__

#include <QtCore>
#include "IVEFHeader.h"
#include "IVEFBody.h"

class MSG_VesselData : public QObject { 
    Q_OBJECT

public:
    MSG_VesselData();
    MSG_VesselData(const MSG_VesselData&);
    MSG_VesselData & operator=(const MSG_VesselData&/*val*/);
    void setHeader(Header val);
    Header getHeader() const;
    void setBody(Body val);
    Body getBody() const;
    QString toXML();
    QString toString(QString lead);

private:
    Header m_header;
    Body m_body;

}; 

#endif
