/* 
 *  Waypoint
 *
 *  Waypoint is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Jan 5 16:22:59 2010.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#ifndef __WAYPOINT_H__
#define __WAYPOINT_H__

#include <QtCore>
#include "IVEFPos.h"

//-----------------------------------------------------------
//! \brief       Class definition of Waypoint
//!
//! Waypoint belonging to the route of this voyage
//!

class Waypoint : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Waypoint();
    //!copy constructor
    //!
    Waypoint(const Waypoint&);
    //!= operator
    //!
    Waypoint & operator=(const Waypoint&/*val*/);
    //!              sets the Pos
    //!
    void setPos(Pos val);

    //!              gets the Pos
    //!
    //! \return     Pos
    //!
    Pos getPos() const;

    //!              sets the ATA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601 ) of the Actual Time Of Arrival of the target.
    //!
    void setATA(QDateTime val);

    //!              gets the ATA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601 ) of the Actual Time Of Arrival of the target.
    //!
    //! \return     QDateTime
    //!
    QDateTime getATA() const;

    //!              returns true if ATAis used (optional field).
    //!
    //! \return     bool
    bool hasATA();

    //!              sets the ETA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Expected Time Of Arrival of the target.
    //!
    void setETA(QDateTime val);

    //!              gets the ETA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Expected Time Of Arrival of the target.
    //!
    //! \return     QDateTime
    //!
    QDateTime getETA() const;

    //!              returns true if ETAis used (optional field).
    //!
    //! \return     bool
    bool hasETA();

    //!              sets the RTA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Requested Time Of Arrival of the target.
    //!
    void setRTA(QDateTime val);

    //!              gets the RTA: Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Requested Time Of Arrival of the target.
    //!
    //! \return     QDateTime
    //!
    QDateTime getRTA() const;

    //!              returns true if RTAis used (optional field).
    //!
    //! \return     bool
    bool hasRTA();

    //!              sets the LoCode: Waypoint name in UN/LOCODE optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497)
    //!
    void setLoCode(QString val);

    //!              gets the LoCode: Waypoint name in UN/LOCODE optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497)
    //!
    //! \return     QString
    //!
    QString getLoCode() const;

    //!              returns true if LoCodeis used (optional field).
    //!
    //! \return     bool
    bool hasLoCode();

    //!              sets the Name: Name of the waypoint
    //!
    void setName(QString val);

    //!              gets the Name: Name of the waypoint
    //!
    //! \return     QString
    //!
    QString getName() const;

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str);


private:
    Pos m_pos;
    QDateTime m_ATA;
    bool m_ATAPresent;
    QDateTime m_ETA;
    bool m_ETAPresent;
    QDateTime m_RTA;
    bool m_RTAPresent;
    QString m_loCode;
    bool m_loCodePresent;
    QString m_name;

}; 

#endif
