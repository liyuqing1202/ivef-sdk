/* 
 *  Header
 *
 *  Header is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Jun 29 14:18:00 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __HEADER_H__
#define __HEADER_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of Header
//!
//! 
//!

class Header : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Header();
    //!copy constructor
    //!
    Header(const Header&);
    //!= operator
    //!
    Header & operator=(const Header&/*val*/);
    //!              sets the Version
    //!
    void setVersion(QString val);

    //!              gets the Version
    //!
    //! \return     QString
    //!
    QString getVersion() const;

    //!              sets the MsgRefId: Must be an Universally Unique Identifier
    //!
    void setMsgRefId(QString val);

    //!              gets the MsgRefId: Must be an Universally Unique Identifier
    //!
    //! \return     QString
    //!
    QString getMsgRefId() const;

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
    QString m_version;
    QString m_msgRefId;

}; 

#endif

