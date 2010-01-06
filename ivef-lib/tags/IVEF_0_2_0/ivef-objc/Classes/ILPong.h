/* 
 *  ILPong
 *
 *  ILPong is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jan 6 14:24:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILPong
//!
//! DATA alive response
//!

@interface ILPong : NSObject { 
    NSString *m_responseOn;
    int m_sourceId;
    NSDate *m_timeStamp;
}


/* ResponseOn:
   Corresponds to the original MsgRefId from the Ping.xml message. Must be an Universally Unique Identifier (TU-T Rec. X.667 | ISO/IEC 9834-8.) */
//!Setter for ResponseOn
//!
-(void) setResponseOn:(NSString *) val;
//!Getter for ResponseOn
//!
-(NSString *) responseOn;

/* SourceId:
   The identification of the node who created this message */
//!Setter for SourceId
//!
-(void) setSourceId:(int) val;
//!Getter for SourceId
//!
-(int) sourceId;

/* TimeStamp:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the time this message is sent. */
//!Setter for TimeStamp
//!
-(void) setTimeStamp:(NSDate *) val;
//!Getter for TimeStamp
//!
-(NSDate *) timeStamp;
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



