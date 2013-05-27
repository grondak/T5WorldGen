/* 
 * File:   System.h
 * Author: tonyreynolds
 *
 * Created on May 26, 2013, 2:34 PM
 */

#ifndef SYSTEM_H
#define	SYSTEM_H
#define NAME_LENGTH 25
#define LOCATION_LENGTH 4
#define UWP_LENGTH 9
#define BASE_LENGTH 1
#define REMARKS_LENGTH 25
#define ZONE_LENGTH 1
#define PBG_LENGTH 3
#define ALLEGIANCE_LENGTH 2
#define STELLARDATA_LENGTH 20

#define STARPORT_POS 0
#define SIZE_POS 1
#define ATMOSPHERE_POS 2
#define HYDROGRAPHICS_POS 3
#define POPULATION_POS 4
#define GOVERNMENT_POS 5
#define LAWLEVEL_POS 6
#define TECHLEVEL_POS 8

#include <string>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;


class System {
public:
    System();
    System(string givenLine);
    System(const System& orig);
    virtual ~System();
    string toString(void);
    void setFileLine(string givenLine);
    string getFileLine(void);
    void parseLine(void);
    string getSystemName();
    void setSystemName(string givenName);
    string getLocation(void);
    void setLocation(string givenLocation);
    void setUWP(string givenUWP);
    string getUWP(void);
    void setBase(string givenBase);
    string getBase(void);
    void setRemarks(string givenRemarks);
    string getRemarks(void);
    void setZone(string givenZone);
    string getZone(void);
    void setPBG(string givenPBG);
    string getPBG(void);
    void setAllegiance(string givenAllegiance);
    string getAllegiance(void);
    void setStellarData(string givenStellarData);
    string getStarport(void);
    string getStellarData(void);
    string getSize(void);
    string getAtmosphere(void);
    string getHydrographics(void);
    string getPopulation(void);
    string getGovernment(void);
    string getLawLevel(void);
    string getTechLevel(void);
    bool hasTradeClassification(string givenClassification);
    bool hasNavalBase(void);
    bool hasScoutBase(void);
    int getImportanceExtension(void);
    string getImportanceString(void);
    string isImportant(void);
    int getTotalShipsPerWeek(void);

    string getEconomicExtension(void);
    string getResourceUnits(void);
    int getPopulationPBG();
    int getBelts();
    int getGasGiants();
    string getCulturalExtension();
    
private:
    string fileLine;
    string systemName;
    string location;
    string UWP;
    string base;
    string remarks;
    string zone;
    string pbg;
    string allegiance;
    string stellarData;
    map<string, string> tradeClassifications;
    string computedEconomicExtension;
    string computedResourceUnits;
    string computedCulturalExtension;
    
    int fromHex(string givenString);
    string trimmer(string givenString);
    string itoh(int givenValue);
    string itoa(int givenValue);
    int roll(int numberOfDice);
    int flux(void);
    void computeEconomicExtension(void);
    void computeCulturalExtension(void);
};

#endif	/* SYSTEM_H */

