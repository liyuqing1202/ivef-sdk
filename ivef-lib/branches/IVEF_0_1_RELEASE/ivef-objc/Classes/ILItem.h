/* 
 *  ILItem
 *
 *  ILItem is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 12 22:41:37 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILItem
//!
//! 
//!

@interface ILItem : NSObject { 
    int m_element;
    NSString *m_field;
}


/* Element:
   Describes requested Vessel data element, possible values:
   1 = position
   2 = static data
   3 = voyage */
//!Setter for Element
//!
-(void) setElement:(int) val;
//!Getter for Element
//!
-(int) element;

/* Field:
   Selected field. Can be 'all' or one of the items of vessel data PositionReport, Static Data  or Voyage */
//!Setter for Field
//!
-(void) setField:(NSString *) val;
//!Getter for Field
//!
-(NSString *) field;
//!Set attributes by providing a key/value dictionary
//!

-(void) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
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



