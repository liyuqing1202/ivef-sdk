/* 
 *  MSG_LoginResponse
 *
 *  MSG_LoginResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jan 6 14:24:15 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __MSG_LOGINRESPONSE_H__
#define __MSG_LOGINRESPONSE_H__

#include <QtCore>
#include "IVEFHeader.h"
#include "IVEFBody.h"

//-----------------------------------------------------------
//! \brief       Class definition of MSG_LoginResponse
//!
//! MESSAGE sent by the supplier indicating wether the user login was accepted or not
//!

class MSG_LoginResponse : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    MSG_LoginResponse();
    //!copy constructor
    //!
    MSG_LoginResponse(const MSG_LoginResponse&);
    //!= operator
    //!
    MSG_LoginResponse & operator=(const MSG_LoginResponse&/*val*/);
    //!              sets the Header
    //!
    void setHeader(Header val);

    //!              gets the Header
    //!
    //! \return     Header
    //!
    Header getHeader() const;

    //!              sets the Body
    //!
    void setBody(Body val);

    //!              gets the Body
    //!
    //! \return     Body
    //!
    Body getBody() const;

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
    Header m_header;
    Body m_body;

}; 

#endif

