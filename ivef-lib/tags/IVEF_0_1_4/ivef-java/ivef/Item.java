/* 
 *  Item
 *
 *  Item is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jan 6 14:24:24 2010.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Item { 

    private int m_element; // default value is uninitialized
    private String m_field; // default value is uninitialized

    public Item() {

    }

    public Item(Item val) {

        m_element = val.getElement();
        m_field = val.getField();
    }

    public void setElement(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) )
            return;
        m_element = val;
    }

    public int getElement() {

        return m_element;
    }

    public void setField(String val) {

        m_field = val;
    }

    public String getField() {

        return m_field;
    }

    public String toXML() {

        String xml = "<Item";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        xml += " Element=\"" + m_element + "\"";
        xml += " Field=\"" + encode( m_field) + "\"";
        xml += ">\n";
        xml += "</Item>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Item\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        str +=  lead + "    Element = " + m_element + "\n";
        str +=  lead + "    Field = " + m_field + "\n";
        return str;
    }
    public String encode( String str) {

        str = str.replaceAll("&", "&amp;");
        str = str.replaceAll("<", "&lt;");
        str = str.replaceAll(">", "&gt;");
        str = str.replaceAll("\"", "&quot;");
        return str;
    }


}
