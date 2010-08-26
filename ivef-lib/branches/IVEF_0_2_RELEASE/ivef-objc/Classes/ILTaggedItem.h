/* 
 *  ILTaggedItem
 *
 *  ILTaggedItem is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 26 11:50:39 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILTaggedItem
//!
//! Generic key/value pairs, can be used to pass information that is not (yet) in the standard, provided server and user agree upon interface. E.g. Blue sign indication for inland waterways, references to voyage or vesseldata (URL)
//!

@interface ILTaggedItem : NSObject { 
    NSString *m_key;
    BOOL m_keyPresent;
    NSString *m_value;
    BOOL m_valuePresent;
}


/* Key:
   Key for the tagged item */
//!Setter for Key
//!
-(BOOL) setKey:(NSString *) val;
//!Getter for Key
//!
-(NSString *) key;

/* Value:
   Value of the tagged item, can be of any type */
//!Setter for Value
//!
-(BOOL) setValue:(NSString *) val;
//!Getter for Value
//!
-(NSString *) value;
//!Set attributes by providing a key/value dictionary
//!

-(BOOL) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!returns nil if not all required fields are set
//!
-(NSString *) XML;
//!Get a string representation of this class
//!
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
//!Helper routine to encode any string to an XML escaped string
//!
-(NSString *) encode: (NSString *) input;

@end



