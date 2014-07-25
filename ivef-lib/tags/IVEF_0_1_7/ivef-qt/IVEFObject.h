/* 
 *  Object
 *
 *  Object is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 14:04:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>

//-----------------------------------------------------------
//! \brief       Class definition of Object
//!
//! 
//!

class Object : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Object();
    //!copy constructor
    //!
    Object(const Object&);
    //!= operator
    //!
    Object & operator=(const Object&/*val*/);
    //!              sets the FileName: Name of the filter. The filter can be a predefined selector or can be defined here in the future. One of the predefined selectors will be 'all'
    //!
    bool setFileName(QString val);

    //!              gets the FileName: Name of the filter. The filter can be a predefined selector or can be defined here in the future. One of the predefined selectors will be 'all'
    //!
    //! \return     QString
    //!
    QString getFileName() const;

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
    QString m_fileName;
    bool m_fileNamePresent;

}; 

#endif
