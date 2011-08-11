/*
 *  codegen.h
 *
 *  schema2code is free software: you can redistribute it and/or modify
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

#ifndef __CODEGEN_H__
#define __CODEGEN_H__

#include "xsdobject.h"

class CodeGen {

public:
    virtual ~CodeGen() {};
    virtual void setObjects(QVector<XSDObject*>objects) = 0;
    virtual void setOutputDir(QString outDir) = 0;
    virtual void setPrefix(QString prefix) = 0;
    virtual void setNamespace(bool ns) = 0;
    virtual void go() = 0;
};

#endif
