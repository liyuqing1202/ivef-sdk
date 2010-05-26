/* 
 *  Transmission
 *
 *  Transmission is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 15:08:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __TRANSMISSION_H__
#define __TRANSMISSION_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>

//-----------------------------------------------------------
//! \brief       Class definition of Transmission
//!
//! 
//!

class Transmission : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Transmission();
    //!copy constructor
    //!
    Transmission(const Transmission&);
    //!= operator
    //!
    Transmission & operator=(const Transmission&/*val*/);
    //!              sets the Type: Type of transmission, possible values are:\n
    //!              1 = single occurrence (whole image)\n
    //!              2 = periodic occurence (predicted, whole image)\n
    //!              3 = a-periodic occurence (synchronous, whenever an object is updated)
    //!
    bool setType(int val);

    //!              gets the Type: Type of transmission, possible values are:\n
    //!              1 = single occurrence (whole image)\n
    //!              2 = periodic occurence (predicted, whole image)\n
    //!              3 = a-periodic occurence (synchronous, whenever an object is updated)
    //!
    //! \return     int
    //!
    int getType() const;

    //!              sets the Period: Specifies the time between two periodic updates in seconds
    //!
    bool setPeriod(float val);

    //!              gets the Period: Specifies the time between two periodic updates in seconds
    //!
    //! \return     float
    //!
    float getPeriod() const;

    //!              returns true if Periodis used (optional field).
    //!
    //! \return     bool
    bool hasPeriod() const;

    //!              generates XML of this object including attributes and child elements
    //!              returns NULL if not all required elements are available
    //!
    //! \return     QString
    QString toXML() const;

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
    QString encode(QString str) const;


private:
    int m_type;
    bool m_typePresent;
    float m_period;
    bool m_periodPresent;

}; 

#endif
