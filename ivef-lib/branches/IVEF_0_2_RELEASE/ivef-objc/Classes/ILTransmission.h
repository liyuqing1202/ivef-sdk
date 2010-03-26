/* 
 *  ILTransmission
 *
 *  ILTransmission is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Mar 26 13:53:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILTransmission
//!
//! 
//!

@interface ILTransmission : NSObject { 
    int m_type;
    float m_period;
    bool m_periodPresent;
}


/* Type:
   Type of transmission, possible values are:
   1 = single occurrence (whole image)
   2 = periodic occurence (predicted, whole image)
   3 = a-periodic occurence (synchronous, whenever an object is updated) */
//!Setter for Type
//!
-(void) setType:(int) val;
//!Getter for Type
//!
-(int) type;

/* Period:
   Specifies the time between two periodic updates in seconds */
//!Setter for Period
//!
-(void) setPeriod:(float) val;
//!Getter for Period
//!
-(float) period;
//!Test for pressence of Period
//!
-(bool) hasPeriod;
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



