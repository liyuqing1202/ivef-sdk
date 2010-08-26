/* 
 *  ILVoyageData
 *
 *  ILVoyageData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 26 11:50:40 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILWaypoint.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILVoyageData
//!
//! DATA regarding a movement of a vessel servers domain
//!

@interface ILVoyageData : NSObject { 
    NSMutableArray *m_waypoints;
    BOOL m_waypointPresent;
    float m_airDraught;
    BOOL m_airDraughtPresent;
    int m_id;
    BOOL m_idPresent;
    int m_cargoTypeIMO;
    BOOL m_cargoTypeIMOPresent;
    NSString *m_contactIdentity;
    BOOL m_contactIdentityPresent;
    NSString *m_destCode;
    BOOL m_destCodePresent;
    NSString *m_destName;
    BOOL m_destNamePresent;
    NSString *m_departCode;
    BOOL m_departCodePresent;
    NSString *m_departName;
    BOOL m_departNamePresent;
    float m_draught;
    BOOL m_draughtPresent;
    NSDate *m_ETA;
    BOOL m_ETAPresent;
    NSDate *m_ATD;
    BOOL m_ATDPresent;
    float m_ISPSLevel;
    BOOL m_ISPSLevelPresent;
    float m_overSizedLength;
    BOOL m_overSizedLengthPresent;
    float m_overSizedWidth;
    BOOL m_overSizedWidthPresent;
    int m_personsOnBoard;
    BOOL m_personsOnBoardPresent;
    float m_pilots;
    BOOL m_pilotsPresent;
    BOOL m_routeBound;
    BOOL m_routeBoundPresent;
    NSString *m_sourceId;
    BOOL m_sourceIdPresent;
    NSString *m_sourceName;
    BOOL m_sourceNamePresent;
    int m_sourceType;
    BOOL m_sourceTypePresent;
    int m_tankerStatus;
    BOOL m_tankerStatusPresent;
    BOOL m_tugs;
    BOOL m_tugsPresent;
    NSDate *m_updateTime;
    BOOL m_updateTimePresent;
}


/* Waypoint:
   Waypoint belonging to the route of this voyage */
//!Remover for Waypoint
//!
-(BOOL) removeWaypoint:(ILWaypoint *) val;
//!Setter for Waypoint
//!
-(BOOL) addWaypoint:(ILWaypoint *) val;
//!Getter for Waypoint
//!
-(ILWaypoint *) waypointAt:(int) i;
//!Element counter for Waypoint
//!
-(int) countOfWaypoints;
//!Get all elements for Waypoint
//!
-(NSArray *) waypoints;

/* AirDraught:
   Actual air draught of the vessel in meters */
//!Setter for AirDraught
//!
-(BOOL) setAirDraught:(float) val;
//!Getter for AirDraught
//!
-(float) airDraught;
//!Test for pressence of AirDraught
//!
-(BOOL) hasAirDraught;

/* Id:
   The unique identification of this voyagedata. Valid from first message with TrackStatus!=Terminated to first message with TrackStatus=Terminated */
//!Setter for Id
//!
-(BOOL) setIdent:(int) val;
//!Getter for Id
//!
-(int) ident;

/* CargoTypeIMO:
   0 = All ships of this type
   1 = Carrying DG, HS, or MP, IMO hazard or pollutant category A
   2 = Carrying DG, HS, or MP, IMO hazard or pollutant category B
   3 = Carrying DG, HS, or MP, IMO hazard or pollutant category C
   4 = Carrying DG, HS, or MP, IMO hazard or pollutant category D
   5 = Carrying DG, HS, or MP, IMO hazard or pollutant of unknown category */
//!Setter for CargoTypeIMO
//!
-(BOOL) setCargoTypeIMO:(int) val;
//!Getter for CargoTypeIMO
//!
-(int) cargoTypeIMO;
//!Test for pressence of CargoTypeIMO
//!
-(BOOL) hasCargoTypeIMO;

/* ContactIdentity:
   reference to the identity associated with this objects voyage */
//!Setter for ContactIdentity
//!
-(BOOL) setContactIdentity:(NSString *) val;
//!Getter for ContactIdentity
//!
-(NSString *) contactIdentity;
//!Test for pressence of ContactIdentity
//!
-(BOOL) hasContactIdentity;

/* DestCode:
   Destination of the target (UN/LOCODE)  optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497) */
//!Setter for DestCode
//!
-(BOOL) setDestCode:(NSString *) val;
//!Getter for DestCode
//!
-(NSString *) destCode;
//!Test for pressence of DestCode
//!
-(BOOL) hasDestCode;

/* DestName:
   Destination name of the target e.g. local code for berth/lock/bridge/terminal */
//!Setter for DestName
//!
-(BOOL) setDestName:(NSString *) val;
//!Getter for DestName
//!
-(NSString *) destName;
//!Test for pressence of DestName
//!
-(BOOL) hasDestName;

/* DepartCode:
   Departure of the target (UN/LOCODE)  optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497) */
//!Setter for DepartCode
//!
-(BOOL) setDepartCode:(NSString *) val;
//!Getter for DepartCode
//!
-(NSString *) departCode;
//!Test for pressence of DepartCode
//!
-(BOOL) hasDepartCode;

/* DepartName:
   Departure name of the target e.g. local code for berth/lock/bridge/terminal */
//!Setter for DepartName
//!
-(BOOL) setDepartName:(NSString *) val;
//!Getter for DepartName
//!
-(NSString *) departName;
//!Test for pressence of DepartName
//!
-(BOOL) hasDepartName;

/* Draught:
   Actual draught of the vessel in meters */
//!Setter for Draught
//!
-(BOOL) setDraught:(float) val;
//!Getter for Draught
//!
-(float) draught;
//!Test for pressence of Draught
//!
-(BOOL) hasDraught;

/* ETA:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the Expected Time Of Arrival of the target at the destination */
//!Setter for ETA
//!
-(BOOL) setETA:(NSDate *) val;
//!Getter for ETA
//!
-(NSDate *) ETA;
//!Test for pressence of ETA
//!
-(BOOL) hasETA;

/* ATD:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the Actual Time Of Departure of the target */
//!Setter for ATD
//!
-(BOOL) setATD:(NSDate *) val;
//!Getter for ATD
//!
-(NSDate *) ATD;
//!Test for pressence of ATD
//!
-(BOOL) hasATD;

/* ISPSLevel:
   The ISPS level of the object (1 = normal, 2 = heightended, 3 = exceptional) */
//!Setter for ISPSLevel
//!
-(BOOL) setISPSLevel:(float) val;
//!Getter for ISPSLevel
//!
-(float) ISPSLevel;
//!Test for pressence of ISPSLevel
//!
-(BOOL) hasISPSLevel;

/* OverSizedLength:
   Length of the target in meter as confirmed by NCA, in case of a convoy of barges */
//!Setter for OverSizedLength
//!
-(BOOL) setOverSizedLength:(float) val;
//!Getter for OverSizedLength
//!
-(float) overSizedLength;
//!Test for pressence of OverSizedLength
//!
-(BOOL) hasOverSizedLength;

/* OverSizedWidth:
   Width of the target in meter as confirmed by the NCA, in case of a convoy of barges */
//!Setter for OverSizedWidth
//!
-(BOOL) setOverSizedWidth:(float) val;
//!Getter for OverSizedWidth
//!
-(float) overSizedWidth;
//!Test for pressence of OverSizedWidth
//!
-(BOOL) hasOverSizedWidth;

/* PersonsOnBoard:
   The number of persons on board of the object, should equal the sum of crew, passengers and support personel if available */
//!Setter for PersonsOnBoard
//!
-(BOOL) setPersonsOnBoard:(int) val;
//!Getter for PersonsOnBoard
//!
-(int) personsOnBoard;
//!Test for pressence of PersonsOnBoard
//!
-(BOOL) hasPersonsOnBoard;

/* Pilots:
   Pilot status
   0 = unknown
   1 = pilot on board
   2 = object under remote pilotage
   3 = pilot required */
//!Setter for Pilots
//!
-(BOOL) setPilots:(float) val;
//!Getter for Pilots
//!
-(float) pilots;
//!Test for pressence of Pilots
//!
-(BOOL) hasPilots;

/* RouteBound:
   This object is bound to the route of this voyage */
//!Setter for RouteBound
//!
-(BOOL) setRouteBound:(BOOL) val;
//!Getter for RouteBound
//!
-(BOOL) routeBound;
//!Test for pressence of RouteBound
//!
-(BOOL) hasRouteBound;

/* SourceId:
   Unique identification of the producer  (UN/LOCODE)  in case multiple producers exist on the same LOCODE, the local competent authority can optionally addended this with a local  code (e.g. BE ANR 01 = Antwerp, 01) */
//!Setter for SourceId
//!
-(BOOL) setSourceId:(NSString *) val;
//!Getter for SourceId
//!
-(NSString *) sourceId;
//!Test for pressence of SourceId
//!
-(BOOL) hasSourceId;

/* SourceName:
   Identification of the originator of this data */
//!Setter for SourceName
//!
-(BOOL) setSourceName:(NSString *) val;
//!Getter for SourceName
//!
-(NSString *) sourceName;

/* SourceType:
   Source/originator type: 0 = unknown, 1 = transponder, 2 = database, 3 = manual, 4 =  fused */
//!Setter for SourceType
//!
-(BOOL) setSourceType:(int) val;
//!Getter for SourceType
//!
-(int) sourceType;

/* TankerStatus:
   Describes the status of the tanker
   0 = Non gas free
   1 = Gas free
   2 = Inert */
//!Setter for TankerStatus
//!
-(BOOL) setTankerStatus:(int) val;
//!Getter for TankerStatus
//!
-(int) tankerStatus;
//!Test for pressence of TankerStatus
//!
-(BOOL) hasTankerStatus;

/* Tugs:
   Object uses tugs */
//!Setter for Tugs
//!
-(BOOL) setTugs:(BOOL) val;
//!Getter for Tugs
//!
-(BOOL) tugs;
//!Test for pressence of Tugs
//!
-(BOOL) hasTugs;

/* UpdateTime:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this data was compiled */
//!Setter for UpdateTime
//!
-(BOOL) setUpdateTime:(NSDate *) val;
//!Getter for UpdateTime
//!
-(NSDate *) updateTime;
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



