/* 
 *  Logout
 *
 *  Logout is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Oct 31 17:00:48 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Logout { 


    public Logout() {

    }

    public Logout(Logout val) {

    }

    public String toXML() {

        String xml = "<Logout";
        DateFormat df = new SimpleDateFormat("yyyy-MM-ddThh:mm:ss.zzz");

        xml += ">\n";
        xml += "</Logout>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Logout\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-ddThh:mm:ss.zzz");

        return str;
    }

}
