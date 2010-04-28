/* 
 *  ILPosReport
 *
 *  ILPosReport is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 28 19:21:07 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILPos.h"
#import "ILSensor.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILPosReport
//!
//! DATA describing a position report of an object
//!

@interface ILPosReport : NSObject { 
    ILPos *m_pos;
    BOOL m_posPresent;
    NSMutableArray *m_sensors;
    BOOL m_sensorPresent;
    int m_id;
    BOOL m_idPresent;
    int m_sourceId;
    BOOL m_sourceIdPresent;
    NSDate *m_updateTime;
    BOOL m_updateTimePresent;
    NSDate *m_updateTimeRadar;
    BOOL m_updateTimeRadarPresent;
    NSDate *m_updateTimeAIS;
    BOOL m_updateTimeAISPresent;
    NSDate *m_updateTimeDR;
    BOOL m_updateTimeDRPresent;
    float m_SOG;
    BOOL m_SOGPresent;
    float m_COG;
    BOOL m_COGPresent;
    NSString *m_lost;
    BOOL m_lostPresent;
    float m_rateOfTurn;
    BOOL m_rateOfTurnPresent;
    float m_orientation;
    BOOL m_orientationPresent;
    float m_length;
    BOOL m_lengthPresent;
    float m_breadth;
    BOOL m_breadthPresent;
    float m_altitude;
    BOOL m_altitudePresent;
    int m_navStatus;
    BOOL m_navStatusPresent;
    int m_updSensorType;
    BOOL m_updSensorTypePresent;
    BOOL m_ATONOffPos;
    BOOL m_ATONOffPosPresent;
}

//!Setter for Pos
//!
-(BOOL) setPos:(ILPos *) val;
//!Getter for Pos
//!
-(ILPos *) pos;

/* Sensor:
   Sensors contributing to this postion report (for the purpose of analysis) */
//!Setter for Sensor
//!
-(BOOL) addSensor:(ILSensor *) val;
//!Getter for Sensor
//!
-(ILSensor *) sensorAt:(int) i;
//!Element counter for Sensor
//!
-(int) countOfSensors;
//!Get all elements for Sensor
//!
-(NSArray *) sensors;

/* Id:
   The identification of this track */
//!Setter for Id
//!
-(BOOL) setIdent:(int) val;
//!Getter for Id
//!
-(int) ident;

/* SourceId:
   The identification of the node who initially created this message */
//!Setter for SourceId
//!
-(BOOL) setSourceId:(int) val;
//!Getter for SourceId
//!
-(int) sourceId;

/* UpdateTime:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was measured. */
//!Setter for UpdateTime
//!
-(BOOL) setUpdateTime:(NSDate *) val;
//!Getter for UpdateTime
//!
-(NSDate *) updateTime;

/* UpdateTimeRadar:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by Radar */
//!Setter for UpdateTimeRadar
//!
-(BOOL) setUpdateTimeRadar:(NSDate *) val;
//!Getter for UpdateTimeRadar
//!
-(NSDate *) updateTimeRadar;
//!Test for pressence of UpdateTimeRadar
//!
-(BOOL) hasUpdateTimeRadar;

/* UpdateTimeAIS:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by AIS */
//!Setter for UpdateTimeAIS
//!
-(BOOL) setUpdateTimeAIS:(NSDate *) val;
//!Getter for UpdateTimeAIS
//!
-(NSDate *) updateTimeAIS;
//!Test for pressence of UpdateTimeAIS
//!
-(BOOL) hasUpdateTimeAIS;

/* UpdateTimeDR:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by dead reckoning */
//!Setter for UpdateTimeDR
//!
-(BOOL) setUpdateTimeDR:(NSDate *) val;
//!Getter for UpdateTimeDR
//!
-(NSDate *) updateTimeDR;
//!Test for pressence of UpdateTimeDR
//!
-(BOOL) hasUpdateTimeDR;

/* SOG:
   Speed over ground in meters per second */
//!Setter for SOG
//!
-(BOOL) setSOG:(float) val;
//!Getter for SOG
//!
-(float) SOG;

/* COG:
   Course over ground  in degrees. (0-360) */
//!Setter for COG
//!
-(BOOL) setCOG:(float) val;
//!Getter for COG
//!
-(float) COG;

/* Lost:
   'yes' or 'no' */
//!Setter for Lost
//!
-(BOOL) setLost:(NSString *) val;
//!Getter for Lost
//!
-(NSString *) lost;

/* RateOfTurn:
   Rate of turn in degrees per minute */
//!Setter for RateOfTurn
//!
-(BOOL) setRateOfTurn:(float) val;
//!Getter for RateOfTurn
//!
-(float) rateOfTurn;
//!Test for pressence of RateOfTurn
//!
-(BOOL) hasRateOfTurn;

/* Orientation:
   Orientation of the target in degrees */
//!Setter for Orientation
//!
-(BOOL) setOrientation:(float) val;
//!Getter for Orientation
//!
-(float) orientation;
//!Test for pressence of Orientation
//!
-(BOOL) hasOrientation;

/* Length:
   Length of the target in meter */
//!Setter for Length
//!
-(BOOL) setLength:(float) val;
//!Getter for Length
//!
-(float) length;
//!Test for pressence of Length
//!
-(BOOL) hasLength;

/* Breadth:
   Breadth of the target in  meter */
//!Setter for Breadth
//!
-(BOOL) setBreadth:(float) val;
//!Getter for Breadth
//!
-(float) breadth;
//!Test for pressence of Breadth
//!
-(BOOL) hasBreadth;

/* Altitude:
   The altitude of the target above the WGS-84 ellipsoid in meters */
//!Setter for Altitude
//!
-(BOOL) setAltitude:(float) val;
//!Getter for Altitude
//!
-(float) altitude;
//!Test for pressence of Altitude
//!
-(BOOL) hasAltitude;

/* NavStatus:
   Navigation status of the target
   0 = under way using engine
   1 = at anchor
   2 = not under command
   3 = restricted manoeuvrability
   4 = constrained by her draught
   5 = moored
   6 = aground
   7 = engaged in fishing
   8 = under way sailing
   9 - 14 = reserved for future use
   15 = undefined default */
//!Setter for NavStatus
//!
-(BOOL) setNavStatus:(int) val;
//!Getter for NavStatus
//!
-(int) navStatus;
//!Test for pressence of NavStatus
//!
-(BOOL) hasNavStatus;

/* UpdSensorType:
   Type of detection or track type:
   1 = radar
   2 = ais
   3 = ais+radar
   4 = deadreckoning
   5 = other */
//!Setter for UpdSensorType
//!
-(BOOL) setUpdSensorType:(int) val;
//!Getter for UpdSensorType
//!
-(int) updSensorType;
//!Test for pressence of UpdSensorType
//!
-(BOOL) hasUpdSensorType;

/* ATONOffPos:
   "1" or "0". Indicates whether or not the ATON is on position or not */
//!Setter for ATONOffPos
//!
-(BOOL) setATONOffPos:(BOOL) val;
//!Getter for ATONOffPos
//!
-(BOOL) ATONOffPos;
//!Test for pressence of ATONOffPos
//!
-(BOOL) hasATONOffPos;
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



