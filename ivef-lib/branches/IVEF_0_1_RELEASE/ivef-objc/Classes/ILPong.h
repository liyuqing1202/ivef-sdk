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
 *  Generated by xsd2code on Thu Aug 26 11:23:13 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILPong
//!
//! 
//!

@interface ILPong : NSObject { 
    NSDate *m_timeStamp;
    BOOL m_timeStampPresent;
    NSString *m_msgId;
    BOOL m_msgIdPresent;
    int m_sourceId;
    BOOL m_sourceIdPresent;
}


/* TimeStamp:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the time this message is sent. */
//!Setter for TimeStamp
//!
-(BOOL) setTimeStamp:(NSDate *) val;
//!Getter for TimeStamp
//!
-(NSDate *) timeStamp;

/* MsgId:
   Corresponds to the original MsgRefId from the Ping.xml message */
//!Setter for MsgId
//!
-(BOOL) setMsgId:(NSString *) val;
//!Getter for MsgId
//!
-(NSString *) msgId;

/* SourceId:
   The identification of the node who created this message */
//!Setter for SourceId
//!
-(BOOL) setSourceId:(int) val;
//!Getter for SourceId
//!
-(int) sourceId;
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



