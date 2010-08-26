<?php

// 
//  ObjectData
//
//  ObjectData is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ObjectData is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY ); without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//*********************************************************************************
//  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
//  Generated by xsd2code on Thu Aug 26 11:51:18 2010.
//*********************************************************************************
//  Copyright 2010
//

require_once "IVEFTrackData.php";
require_once "IVEFVesselData.php";
require_once "IVEFVoyageData.php";
require_once "IVEFTaggedItem.php";

class ObjectData { 

    var $m_trackData; // default value is uninitialized
    var $m_trackDataPresent;
    var $m_vesselData; // default value is uninitialized
    var $m_vesselDataPresent;
    var $m_voyageData; // default value is uninitialized
    var $m_voyageDataPresent;
    var $m_taggedItem; // default value is uninitialized
    var $m_taggedItemPresent;

    public function ObjectData() {

        date_default_timezone_set('UTC');
        $this->m_trackDataPresent = false;
        $this->m_trackData = new TrackData();
        $this->m_vesselDataPresent = false;
        $this->m_vesselDatas = array();
        $this->m_voyageDataPresent = false;
        $this->m_voyageDatas = array();
        $this->m_taggedItemPresent = false;
        $this->m_taggedItems = array();
    }

    public function setTrackData( $val ) {

        $this->m_trackDataPresent = true;
        $this->m_trackData = $val;
        return true;
    }

    public function getTrackData() {

        return $this->m_trackData;
    }

    public function hasTrackData() {

        return $this->m_trackDataPresent;
    }

    public function removeVesselData(VesselData $val ) {
          for($i=0; $i< count($this->m_vesselDatas); $i++) {
             if($this->m_vesselDatas[i] == $val) {
                 unset($this->m_vesselDatas[i]);
             }
          }
        return true;
    }

    public function addVesselData(VesselData $val ) {

        $this->m_vesselDatas[] = $val;
        return true;
    }

    public function getVesselDataAt($i) {

        return $this->m_vesselDatas[$i];
    }

    public function countOfVesselDatas() {

        return count($this->m_vesselDatas);
    }

    public function removeVoyageData(VoyageData $val ) {
          for($i=0; $i< count($this->m_voyageDatas); $i++) {
             if($this->m_voyageDatas[i] == $val) {
                 unset($this->m_voyageDatas[i]);
             }
          }
        return true;
    }

    public function addVoyageData(VoyageData $val ) {

        $this->m_voyageDatas[] = $val;
        return true;
    }

    public function getVoyageDataAt($i) {

        return $this->m_voyageDatas[$i];
    }

    public function countOfVoyageDatas() {

        return count($this->m_voyageDatas);
    }

    public function removeTaggedItem(TaggedItem $val ) {
          for($i=0; $i< count($this->m_taggedItems); $i++) {
             if($this->m_taggedItems[i] == $val) {
                 unset($this->m_taggedItems[i]);
             }
          }
        return true;
    }

    public function addTaggedItem(TaggedItem $val ) {

        $this->m_taggedItems[] = $val;
        return true;
    }

    public function getTaggedItemAt($i) {

        return $this->m_taggedItems[$i];
    }

    public function countOfTaggedItems() {

        return count($this->m_taggedItems);
    }

    public function toXML() {

        $xml = new SimpleXMLElement("<ObjectData></ObjectData>");

        if ( $this->hasTrackData() ) {
            $dom = dom_import_simplexml($xml);
            $child_as_xml = $this->m_trackData->toXML();
            $child_as_simplexml = new SimpleXMLElement($child_as_xml);
            $child_as_dom = dom_import_simplexml($child_as_simplexml);
            $child_as_leaf = $dom->ownerDocument->importNode($child_as_dom, true);
            $dom->appendChild($child_as_leaf);
            $xml = simplexml_import_dom($dom);
        } 
        if ( count($this->m_vesselDatas) < 0) {
            return ""; // not enough values
        }
        if ( count($this->m_vesselDatas) < 0) {
            return ""; // not enough values
        }
        foreach($this->m_vesselDatas as $attribute) {
        $dom = dom_import_simplexml($xml);
        $child_as_xml = $attribute->toXML();
        $child_as_simplexml = new SimpleXMLElement($child_as_xml);
        $child_as_dom = dom_import_simplexml($child_as_simplexml);
        $child_as_leaf = $dom->ownerDocument->importNode($child_as_dom, true);
        $dom->appendChild($child_as_leaf);
        $xml = simplexml_import_dom($dom);
        } 
        if ( count($this->m_voyageDatas) < 0) {
            return ""; // not enough values
        }
        if ( count($this->m_voyageDatas) < 0) {
            return ""; // not enough values
        }
        foreach($this->m_voyageDatas as $attribute) {
        $dom = dom_import_simplexml($xml);
        $child_as_xml = $attribute->toXML();
        $child_as_simplexml = new SimpleXMLElement($child_as_xml);
        $child_as_dom = dom_import_simplexml($child_as_simplexml);
        $child_as_leaf = $dom->ownerDocument->importNode($child_as_dom, true);
        $dom->appendChild($child_as_leaf);
        $xml = simplexml_import_dom($dom);
        } 
        if ( count($this->m_taggedItems) < 0) {
            return ""; // not enough values
        }
        if ( count($this->m_taggedItems) < 0) {
            return ""; // not enough values
        }
        foreach($this->m_taggedItems as $attribute) {
        $dom = dom_import_simplexml($xml);
        $child_as_xml = $attribute->toXML();
        $child_as_simplexml = new SimpleXMLElement($child_as_xml);
        $child_as_dom = dom_import_simplexml($child_as_simplexml);
        $child_as_leaf = $dom->ownerDocument->importNode($child_as_dom, true);
        $dom->appendChild($child_as_leaf);
        $xml = simplexml_import_dom($dom);
        } 
        return $xml->asXML();
    }

    public function toString() {

    	return $this->toStringWithLead("");
    }

    public function toStringWithLead( $lead ) {

        $str = $lead . "ObjectData\n";

        if ( $this->hasTrackData() ) {
            $str .=  $this->m_trackData->toStringWithLead($lead . "    ") ;
        }
        foreach($this->m_vesselDatas as $attribute) {
           $str .= $attribute->toStringWithLead($lead . "    ");
        }
        foreach($this->m_voyageDatas as $attribute) {
           $str .= $attribute->toStringWithLead($lead . "    ");
        }
        foreach($this->m_taggedItems as $attribute) {
           $str .= $attribute->toStringWithLead($lead . "    ");
        }

        return $str;
    }
}
?>
