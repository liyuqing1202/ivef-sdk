/* 
 *  Owner
 *
 *  Owner is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:29:01 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __OWNER_H__
#define __OWNER_H__

#include <QtCore>

class Owner : public QObject { 
    Q_OBJECT

public:
    Owner();
    Owner(const Owner&);
    Owner & operator=(const Owner&/*val*/);

    /* PortOfRegistry:
       Port Of Registry (UN/LOCODE) */
    void setPortOfRegistry(QString val);
    QString getPortOfRegistry() const;
    bool hasPortOfRegistry();

    /* CountryFlag:
       The country flag (ISO 3166-1-alpha2) */
    void setCountryFlag(QString val);
    QString getCountryFlag() const;
    bool hasCountryFlag();

    /* Owner:
       Identification of the owner of the object */
    void setOwner(QString val);
    QString getOwner() const;
    bool hasOwner();

    /* CountryOwner:
       The country flag (ISO 3166-1-alpha2) */
    void setCountryOwner(QString val);
    QString getCountryOwner() const;
    bool hasCountryOwner();

    /* Company:
       Identification of the company associated with the object */
    void setCompany(QString val);
    QString getCompany() const;
    bool hasCompany();

    /* HomePort:
       Home port of the target (UN/LOCODE) */
    void setHomePort(QString val);
    QString getHomePort() const;
    bool hasHomePort();
    QString toXML();
    QString toString(QString lead);

private:
    QString m_portOfRegistry;
    bool m_portOfRegistryPresent;
    QString m_countryFlag;
    bool m_countryFlagPresent;
    QString m_owner;
    bool m_ownerPresent;
    QString m_countryOwner;
    bool m_countryOwnerPresent;
    QString m_company;
    bool m_companyPresent;
    QString m_homePort;
    bool m_homePortPresent;

}; 

#endif
