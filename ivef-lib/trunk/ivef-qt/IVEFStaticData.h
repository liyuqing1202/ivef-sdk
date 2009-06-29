/* 
 *  StaticData
 *
 *  StaticData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Jun 29 14:18:00 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __STATICDATA_H__
#define __STATICDATA_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of StaticData
//!
//! 
//!

class StaticData : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    StaticData();
    //!copy constructor
    //!
    StaticData(const StaticData&);
    //!= operator
    //!
    StaticData & operator=(const StaticData&/*val*/);
    //!              sets the Id: The identification of this static data
    //!
    void setId(QString val);

    //!              gets the Id: The identification of this static data
    //!
    //! \return     QString
    //!
    QString getId() const;

    //!              sets the SourceName: Identification of the originator of the data
    //!
    void setSourceName(QString val);

    //!              gets the SourceName: Identification of the originator of the data
    //!
    //! \return     QString
    //!
    QString getSourceName() const;

    //!              sets the Source: Source/originator type: 1 = transponder 2 = database 3 = manual
    //!
    void setSource(int val);

    //!              gets the Source: Source/originator type: 1 = transponder 2 = database 3 = manual
    //!
    //! \return     int
    //!
    int getSource() const;

    //!              sets the Length: Length of the target in meter
    //!
    void setLength(float val);

    //!              gets the Length: Length of the target in meter
    //!
    //! \return     float
    //!
    float getLength() const;

    //!              returns true if Lengthis used (optional field).
    //!
    //! \return     bool
    bool hasLength();

    //!              sets the Breadth: Breadth of the target in meter
    //!
    void setBreadth(float val);

    //!              gets the Breadth: Breadth of the target in meter
    //!
    //! \return     float
    //!
    float getBreadth() const;

    //!              returns true if Breadthis used (optional field).
    //!
    //! \return     bool
    bool hasBreadth();

    //!              sets the Callsign: Callsign of the target
    //!
    void setCallsign(QString val);

    //!              gets the Callsign: Callsign of the target
    //!
    //! \return     QString
    //!
    QString getCallsign() const;

    //!              returns true if Callsignis used (optional field).
    //!
    //! \return     bool
    bool hasCallsign();

    //!              sets the ShipName: Name of the target
    //!
    void setShipName(QString val);

    //!              gets the ShipName: Name of the target
    //!
    //! \return     QString
    //!
    QString getShipName() const;

    //!              returns true if ShipNameis used (optional field).
    //!
    //! \return     bool
    bool hasShipName();

    //!              sets the ObjectType: 1 = Aircraft\n
    //!              2 = Vessel\n
    //!              3 = Vehicle (not an aircraft or vessel)\n
    //!              4 = BaseStation\n
    //!              5 = Aids to Navigate\n
    //!              6 = Virtual Aids to Navigate\n
    //!              7 = Field Transponder
    //!
    void setObjectType(int val);

    //!              gets the ObjectType: 1 = Aircraft\n
    //!              2 = Vessel\n
    //!              3 = Vehicle (not an aircraft or vessel)\n
    //!              4 = BaseStation\n
    //!              5 = Aids to Navigate\n
    //!              6 = Virtual Aids to Navigate\n
    //!              7 = Field Transponder
    //!
    //! \return     int
    //!
    int getObjectType() const;

    //!              returns true if ObjectTypeis used (optional field).
    //!
    //! \return     bool
    bool hasObjectType();

    //!              sets the ShipType: 20 = WIG\n
    //!              30 = fishing vessel\n
    //!              31 = towing vessel\n
    //!              32 = big towing vessel\n
    //!              33 = dredging vessel\n
    //!              34 = diving vessel\n
    //!              35 = military vessel\n
    //!              36 = sailing vessel\n
    //!              37 = pleasure craft\n
    //!              40 = HSC\n
    //!              50 = pilot vessel\n
    //!              51 = SAR\n
    //!              52 = tug\n
    //!              53 = port tender\n
    //!              54 = anti pollution vessel\n
    //!              55 = law enforcement vessel\n
    //!              58 = medical vessel\n
    //!              59 = mob83 vessel\n
    //!              60 = passenger ship\n
    //!              70 = cargo ship\n
    //!              80 = tanker\n
    //!              90 = other types of ship
    //!
    void setShipType(int val);

    //!              gets the ShipType: 20 = WIG\n
    //!              30 = fishing vessel\n
    //!              31 = towing vessel\n
    //!              32 = big towing vessel\n
    //!              33 = dredging vessel\n
    //!              34 = diving vessel\n
    //!              35 = military vessel\n
    //!              36 = sailing vessel\n
    //!              37 = pleasure craft\n
    //!              40 = HSC\n
    //!              50 = pilot vessel\n
    //!              51 = SAR\n
    //!              52 = tug\n
    //!              53 = port tender\n
    //!              54 = anti pollution vessel\n
    //!              55 = law enforcement vessel\n
    //!              58 = medical vessel\n
    //!              59 = mob83 vessel\n
    //!              60 = passenger ship\n
    //!              70 = cargo ship\n
    //!              80 = tanker\n
    //!              90 = other types of ship
    //!
    //! \return     int
    //!
    int getShipType() const;

    //!              returns true if ShipTypeis used (optional field).
    //!
    //! \return     bool
    bool hasShipType();

    //!              sets the IMO: IMO number of the target
    //!
    void setIMO(int val);

    //!              gets the IMO: IMO number of the target
    //!
    //! \return     int
    //!
    int getIMO() const;

    //!              returns true if IMOis used (optional field).
    //!
    //! \return     bool
    bool hasIMO();

    //!              sets the MMSI: MMSI number of the target
    //!
    void setMMSI(int val);

    //!              gets the MMSI: MMSI number of the target
    //!
    //! \return     int
    //!
    int getMMSI() const;

    //!              returns true if MMSIis used (optional field).
    //!
    //! \return     bool
    bool hasMMSI();

    //!              sets the ATONType: 0 = Unknown\n
    //!              1 = Unknown fixed\n
    //!              2 = Unknown floating\n
    //!              3 = Fixed off shore structure\n
    //!              5 = Light, without sectors\n
    //!              6 = Light, with sectors\n
    //!              7 = Leading Light Front\n
    //!              8 = Leading Light Rear\n
    //!              9 = Beacon, Cardinal N\n
    //!              10 = Beacon, Cardinal E\n
    //!              11 = Beacon, Cardinal S\n
    //!              12 = Beacon, Cardinal W\n
    //!              13 = Beacon, Port hand\n
    //!              14 = Beacon, Starboard hand\n
    //!              15 = Beacon, Preferred Channel port hand\n
    //!              16 = Beacon, Preferred Channel starboard hand\n
    //!              17 = Beacon, Isolated danger\n
    //!              18 = Beacon, Safe water\n
    //!              19 = Beacon, Special mark\n
    //!              20 = Cardinal Mark N\n
    //!              21 = Cardinal Mark E\n
    //!              22 = Cardinal Mark S\n
    //!              23 = Cardinal Mark W\n
    //!              24 = Port hand Mark\n
    //!              25 = Starboard hand Mark\n
    //!              26 = Preferred Channel Port hand\n
    //!              27 = Preferred Channel Starboard hand\n
    //!              28 = Isolated danger\n
    //!              29 = Safe Water\n
    //!              30 = Special Mark\n
    //!              31 = Light Vessel / LANBY/Rigs\n
    //!              32 = Reference point\n
    //!              33 = RACON
    //!
    void setATONType(int val);

    //!              gets the ATONType: 0 = Unknown\n
    //!              1 = Unknown fixed\n
    //!              2 = Unknown floating\n
    //!              3 = Fixed off shore structure\n
    //!              5 = Light, without sectors\n
    //!              6 = Light, with sectors\n
    //!              7 = Leading Light Front\n
    //!              8 = Leading Light Rear\n
    //!              9 = Beacon, Cardinal N\n
    //!              10 = Beacon, Cardinal E\n
    //!              11 = Beacon, Cardinal S\n
    //!              12 = Beacon, Cardinal W\n
    //!              13 = Beacon, Port hand\n
    //!              14 = Beacon, Starboard hand\n
    //!              15 = Beacon, Preferred Channel port hand\n
    //!              16 = Beacon, Preferred Channel starboard hand\n
    //!              17 = Beacon, Isolated danger\n
    //!              18 = Beacon, Safe water\n
    //!              19 = Beacon, Special mark\n
    //!              20 = Cardinal Mark N\n
    //!              21 = Cardinal Mark E\n
    //!              22 = Cardinal Mark S\n
    //!              23 = Cardinal Mark W\n
    //!              24 = Port hand Mark\n
    //!              25 = Starboard hand Mark\n
    //!              26 = Preferred Channel Port hand\n
    //!              27 = Preferred Channel Starboard hand\n
    //!              28 = Isolated danger\n
    //!              29 = Safe Water\n
    //!              30 = Special Mark\n
    //!              31 = Light Vessel / LANBY/Rigs\n
    //!              32 = Reference point\n
    //!              33 = RACON
    //!
    //! \return     int
    //!
    int getATONType() const;

    //!              returns true if ATONTypeis used (optional field).
    //!
    //! \return     bool
    bool hasATONType();

    //!              sets the ATONName: Name of Aids-to-navigation
    //!
    void setATONName(QString val);

    //!              gets the ATONName: Name of Aids-to-navigation
    //!
    //! \return     QString
    //!
    QString getATONName() const;

    //!              returns true if ATONNameis used (optional field).
    //!
    //! \return     bool
    bool hasATONName();

    //!              sets the AntPosDistFromFront: GPS Antenna position distance from front in meters
    //!
    void setAntPosDistFromFront(float val);

    //!              gets the AntPosDistFromFront: GPS Antenna position distance from front in meters
    //!
    //! \return     float
    //!
    float getAntPosDistFromFront() const;

    //!              returns true if AntPosDistFromFrontis used (optional field).
    //!
    //! \return     bool
    bool hasAntPosDistFromFront();

    //!              sets the AntPosDistFromLeft: GPS Antenna position distance from left in meters
    //!
    void setAntPosDistFromLeft(float val);

    //!              gets the AntPosDistFromLeft: GPS Antenna position distance from left in meters
    //!
    //! \return     float
    //!
    float getAntPosDistFromLeft() const;

    //!              returns true if AntPosDistFromLeftis used (optional field).
    //!
    //! \return     bool
    bool hasAntPosDistFromLeft();

    //!              sets the NatLangShipName: The name of the vessel in native language
    //!
    void setNatLangShipName(QString val);

    //!              gets the NatLangShipName: The name of the vessel in native language
    //!
    //! \return     QString
    //!
    QString getNatLangShipName() const;

    //!              returns true if NatLangShipNameis used (optional field).
    //!
    //! \return     bool
    bool hasNatLangShipName();

    //!              sets the PortOfRegistry: Port Of Registry
    //!
    void setPortOfRegistry(QString val);

    //!              gets the PortOfRegistry: Port Of Registry
    //!
    //! \return     QString
    //!
    QString getPortOfRegistry() const;

    //!              returns true if PortOfRegistryis used (optional field).
    //!
    //! \return     bool
    bool hasPortOfRegistry();

    //!              sets the CountryFlag: The country flag
    //!
    void setCountryFlag(QString val);

    //!              gets the CountryFlag: The country flag
    //!
    //! \return     QString
    //!
    QString getCountryFlag() const;

    //!              returns true if CountryFlagis used (optional field).
    //!
    //! \return     bool
    bool hasCountryFlag();

    //!              sets the MaxAirDraught: Maximum air draught of the vessel in meters
    //!
    void setMaxAirDraught(float val);

    //!              gets the MaxAirDraught: Maximum air draught of the vessel in meters
    //!
    //! \return     float
    //!
    float getMaxAirDraught() const;

    //!              returns true if MaxAirDraughtis used (optional field).
    //!
    //! \return     bool
    bool hasMaxAirDraught();

    //!              sets the MaxDraught: Maximum draught of the vessel in meters
    //!
    void setMaxDraught(float val);

    //!              gets the MaxDraught: Maximum draught of the vessel in meters
    //!
    //! \return     float
    //!
    float getMaxDraught() const;

    //!              returns true if MaxDraughtis used (optional field).
    //!
    //! \return     bool
    bool hasMaxDraught();

    //!              sets the DeepWaterVesselind: "yes" or "no"
    //!
    void setDeepWaterVesselind(QString val);

    //!              gets the DeepWaterVesselind: "yes" or "no"
    //!
    //! \return     QString
    //!
    QString getDeepWaterVesselind() const;

    //!              returns true if DeepWaterVesselindis used (optional field).
    //!
    //! \return     bool
    bool hasDeepWaterVesselind();

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str);


private:
    QString m_id;
    QString m_sourceName;
    int m_source;
    float m_length;
    bool m_lengthPresent;
    float m_breadth;
    bool m_breadthPresent;
    QString m_callsign;
    bool m_callsignPresent;
    QString m_shipName;
    bool m_shipNamePresent;
    int m_objectType;
    bool m_objectTypePresent;
    int m_shipType;
    bool m_shipTypePresent;
    int m_IMO;
    bool m_IMOPresent;
    int m_MMSI;
    bool m_MMSIPresent;
    int m_ATONType;
    bool m_ATONTypePresent;
    QString m_ATONName;
    bool m_ATONNamePresent;
    float m_antPosDistFromFront;
    bool m_antPosDistFromFrontPresent;
    float m_antPosDistFromLeft;
    bool m_antPosDistFromLeftPresent;
    QString m_natLangShipName;
    bool m_natLangShipNamePresent;
    QString m_portOfRegistry;
    bool m_portOfRegistryPresent;
    QString m_countryFlag;
    bool m_countryFlagPresent;
    float m_maxAirDraught;
    bool m_maxAirDraughtPresent;
    float m_maxDraught;
    bool m_maxDraughtPresent;
    QString m_deepWaterVesselind;
    bool m_deepWaterVesselindPresent;

}; 

#endif

