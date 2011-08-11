/*
 *  testqt.h
 *
 *  ivef2kml is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  Created by Lukassen on 11/06/08.
 *  Copyright 2008
 *
 */

#ifndef __ILISTENAPP_H__
#define __ILISTENAPP_H__

#include <iostream>

#include <QApplication>

#include "IVEFParser.h"

class testqt : public QApplication {
    Q_OBJECT

public:
    testqt( int & argc, char ** argv );

private:
    ivef::Parser m_parser;

private slots:
    void slotMSG_IVEF( ivef::MSG_IVEF obj );
    void slotPrintError( QString errorStr );

private:

};

#endif
