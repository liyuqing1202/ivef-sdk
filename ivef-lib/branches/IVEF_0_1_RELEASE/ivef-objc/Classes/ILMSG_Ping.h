/* 
 *  ILMSG_Ping
 *
 *  ILMSG_Ping is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 12 22:52:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILHeader.h"
#import "ILBody.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILMSG_Ping
//!
//! MESSAGE sent by either the user or the supplier to verify the aliveness of the connection, failure to respond within the timeout will lead to disconnect (default = 3 seconds)
//!

@interface ILMSG_Ping : NSObject { 
    ILHeader *m_header;
    ILBody *m_body;
}

//!Setter for Header
//!
-(void) setHeader:(ILHeader *) val;
//!Getter for Header
//!
-(ILHeader *) header;
//!Setter for Body
//!
-(void) setBody:(ILBody *) val;
//!Getter for Body
//!
-(ILBody *) body;
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



