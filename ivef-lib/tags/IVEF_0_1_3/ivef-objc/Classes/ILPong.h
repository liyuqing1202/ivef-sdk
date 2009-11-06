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
 *  Generated by xsd2code on Thu Oct 29 15:39:40 2009.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>

@interface ILPong : NSObject { 
    NSDate *m_timeStamp;
    NSString *m_msgId;
    int m_sourceId;
}


/* TimeStamp:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the time this message is sent. */
-(void) setTimeStamp:(NSDate *) val;
-(NSDate *) timeStamp;

/* MsgId:
   Corresponds to the original MsgRefId from the Ping.xml message */
-(void) setMsgId:(NSString *) val;
-(NSString *) msgId;

/* SourceId:
   The identification of the node who created this message */
-(void) setSourceId:(int) val;
-(int) sourceId;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end


