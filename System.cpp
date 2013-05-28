/* 
 * File:   System.cpp
 * Author: tonyreynolds
 * 
 * Created on May 26, 2013, 2:34 PM
 */

#include "System.h"
using namespace std;

System::System() {
}

System::System(string givenLine) {
    setFileLine(givenLine);
    // long form Trade Classification Mappings
    tradeClassifications["Asteroid"] = "As";
    tradeClassifications["Desert"] = "De";
    tradeClassifications["Garden World"] = "Ga";
    tradeClassifications["Hellworld"] = "He";
    tradeClassifications["Ice-Capped"] = "Ic";
    tradeClassifications["Ocean World"] = "Oc";
    tradeClassifications["Vacuum World"] = "Va";
    tradeClassifications["Water World"] = "Wa";

    tradeClassifications["Dieback"] = "Di";
    tradeClassifications["Barren"] = "Ba";
    tradeClassifications["Low Population"] = "Lo";
    tradeClassifications["Non-Industrial"] = "Ni";
    tradeClassifications["Pre-High"] = "Ph";
    tradeClassifications["High Population"] = "Hi";
    
    tradeClassifications["Pre-Agricultural"] = "Pa";
    tradeClassifications["Agricultural"] = "Ag";
    tradeClassifications["Non-agricultural"] = "Na";
    tradeClassifications["Pre-Industrial"] = "Pi";
    tradeClassifications["Industrial"] = "In";
    tradeClassifications["Poor"] = "Po";
    tradeClassifications["Pre-Rich"] = "Pr";
    tradeClassifications["Rich"] = "Ri";
    
    tradeClassifications["Frozen"] = "Fr";
    tradeClassifications["Hot"] = "Ho";
    tradeClassifications["Cold"] = "Co";
    tradeClassifications["Locked"] = "Lk";
    tradeClassifications["Tropic"] = "Tr";
    tradeClassifications["Tundra"] = "Tu";
    tradeClassifications["Twilight Zone"] = "Tz";
    
    tradeClassifications["Farming"] = "Fa";
    tradeClassifications["Mining"] = "Mi";
    tradeClassifications["Military Rule"] = "Mr";
    tradeClassifications["Prison, Exile Camp"] = "Px";
    tradeClassifications["Penal Colony"] = "Pe";
    tradeClassifications["Reserve"] = "Re";
    
    tradeClassifications["Subsector Capital"] = "Cp";
    tradeClassifications["Sector Capital"] = "Cs";
    tradeClassifications["Capital"] = "Cx";
    tradeClassifications["Colony"] = "Cy";
    
    tradeClassifications["Satellite"] = "Sa";
    tradeClassifications["Forbidden"] = "Fo";
    tradeClassifications["Puzzle"] = "Pz";
    tradeClassifications["Dangerous"] = "Da";
    tradeClassifications["Data Repository"] = "Ab";
    tradeClassifications["Ancient Site"] = "An";

    
    // Short form mappings... you can't get the list of mapped elements,
    // so duplicate entries allow ease of access by the shorter name too
    tradeClassifications["As"] = "As";
    tradeClassifications["De"] = "De";
    tradeClassifications["Ga"] = "Ga";
    tradeClassifications["He"] = "He";
    tradeClassifications["Ic"] = "Ic";
    tradeClassifications["Oc"] = "Oc";
    tradeClassifications["Va"] = "Va";
    tradeClassifications["Wa"] = "Wa";

    tradeClassifications["Di"] = "Di";
    tradeClassifications["Ba"] = "Ba";
    tradeClassifications["Lo"] = "Lo";
    tradeClassifications["Ni"] = "Ni";
    tradeClassifications["Ph"] = "Ph";
    tradeClassifications["Hi"] = "Hi";
    
    tradeClassifications["Pa"] = "Pa";
    tradeClassifications["Ag"] = "Ag";
    tradeClassifications["Na"] = "Na";
    tradeClassifications["Pi"] = "Pi";
    tradeClassifications["In"] = "In";
    tradeClassifications["Po"] = "Po";
    tradeClassifications["Pr"] = "Pr";
    tradeClassifications["Ri"] = "Ri";
    
    tradeClassifications["Fr"] = "Fr";
    tradeClassifications["Ho"] = "Ho";
    tradeClassifications["Co"] = "Co";
    tradeClassifications["Lk"] = "Lk";
    tradeClassifications["Tr"] = "Tr";
    tradeClassifications["Tu"] = "Tu";
    tradeClassifications["Tz"] = "Tz";
    
    tradeClassifications["Fa"] = "Fa";
    tradeClassifications["Mi"] = "Mi";
    tradeClassifications["Mr"] = "Mr";
    tradeClassifications["Px"] = "Px";
    tradeClassifications["Pe"] = "Pe";
    tradeClassifications["Re"] = "Re";
    
    tradeClassifications["Cp"] = "Cp";
    tradeClassifications["Cs"] = "Cs";
    tradeClassifications["Cx"] = "Cx";
    tradeClassifications["Cy"] = "Cy";
    
    tradeClassifications["Sa"] = "Sa";
    tradeClassifications["Fo"] = "Fo";
    tradeClassifications["Pz"] = "Pz";
    tradeClassifications["Da"] = "Da";
    tradeClassifications["Ab"] = "Ab";
    tradeClassifications["An"] = "An";
    

}

System::System(const System& orig) {
}

System::~System() {
}

string System::toString(void)
{
    string importanceNote = isImportant();
    if (importanceNote.length() > 0)
        importanceNote = "(" + importanceNote + ")";
    
    return  getSystemName() + "," + getLocation() + "," + getUWP() +
            + "(" + getStarport() + "/" + getSize() + "/" + getAtmosphere() + "/" + getHydrographics() + "/" +
            getGovernment() + "/" + getLawLevel() + "/" + getTechLevel() + ")"
            "," + getBase() + "," + getRemarks() + "," + getZone() + 
            "," + getPBG() + "," + getAllegiance() + "," + getStellarData() + "," + "{" + getImportanceString() + "}" + "," +importanceNote +
            "," + itoa(getTotalShipsPerWeek()) + "," + "(" + getEconomicExtension() + ")" + "," + getResourceUnits() + "," + "[" + getCulturalExtension() + "]";
            
}

void System::setFileLine(string givenLine)
{
    fileLine = givenLine;
}
string System::getFileLine(void)
{
    return fileLine;
}


string System::getSystemName()
{
    return systemName;
}

void System::setSystemName(string givenName)
{
    systemName = givenName;
}

string System::getLocation(void)
{
    return location;
}

void System::setLocation(string givenLocation)
{
    location = givenLocation;
}

void System::setUWP(string givenUWP)
{
    UWP = givenUWP;
}

string System::getUWP(void)
{
    return UWP;
}

void System::setBase(string givenBase)
{
    base = givenBase;
}

string System::getBase(void)
{
    return base;
}

void System::setRemarks(string givenRemarks)
{
    remarks = givenRemarks;
}

string System::getRemarks(void)
{
    return remarks;
}

void System::setZone(string givenZone)
{
    zone = givenZone;
}

string System::getZone(void)
{
    return zone;
}

void System::setPBG(string givenPBG)
{
    pbg = givenPBG;
}

string System::getPBG(void)
{
    return pbg;
}

void System::setAllegiance(string givenAllegiance)
{
    allegiance = givenAllegiance;
}

string System::getAllegiance(void)
{
    return allegiance;
}

void System::setStellarData(string givenStellarData)
{
    stellarData = givenStellarData;
}

string System::getStellarData(void)
{
    return stellarData;
}

string System::getStarport(void)
{
    return getUWP().substr(STARPORT_POS,1);
}

string System::getSize(void)
{
    return getUWP().substr(SIZE_POS,1);
}

string System::getAtmosphere(void)
{
    return getUWP().substr(ATMOSPHERE_POS,1);
}

string System::getHydrographics(void)
{
    return getUWP().substr(HYDROGRAPHICS_POS,1);
}

string System::getPopulation(void)
{
    return getUWP().substr(POPULATION_POS,1);
}

string System::getGovernment(void)
{
    return getUWP().substr(GOVERNMENT_POS,1);
}

string System::getLawLevel(void)
{
    return getUWP().substr(LAWLEVEL_POS,1);
}

string System::getTechLevel(void)
{
    return getUWP().substr(TECHLEVEL_POS,1);
}

int System::fromHex(string givenString)
{
    int value = 0;
    
    if(givenString[0] >= '0' && givenString[0] <= '9')
        value = givenString[0] - '0' + 0;
    if(givenString[0] >= 'A')
        value = givenString[0] - 'A' + 10;
    return value;
}

string System::trimmer(string givenString)
{
    size_t endpos = givenString.find_last_not_of(" \t");
    if( string::npos != endpos )
    {
        return givenString.substr( 0, endpos+1 );
    }   
    return givenString;
}

string System::itoh(int givenValue)
{
    char value = 0;
    if (givenValue < 10) value = givenValue + '0';
    else
        value = givenValue - 10 + 'A';
    
    return string("") + value;
}

string System::itoa(int givenValue)
{
    string s;
    stringstream out;

    out << givenValue;
    return out.str();
}

int System::roll(int numberOfDice)
{
    int value = 0;
    for(int count = 0; count < numberOfDice; count++)
    {
        value += rand() % 6;
    }
    return value;
    
}

int System::flux(void)
{
    return (rand() %6) - (rand() %6);
}

void System::parseLine()
{
    string line = getFileLine();
    int workingPosition = 0;
    //cout << "parsing: " << line << endl;
    setSystemName(trimmer(line.substr(workingPosition,NAME_LENGTH)));
    workingPosition += NAME_LENGTH + 1;
    
    setLocation(line.substr(workingPosition,LOCATION_LENGTH));
    workingPosition += LOCATION_LENGTH + 1;
    
    setUWP(line.substr(workingPosition, UWP_LENGTH));
    workingPosition += UWP_LENGTH + 1;
    
    setBase(line.substr(workingPosition, BASE_LENGTH));
    workingPosition += BASE_LENGTH + 1;
    
    setRemarks(line.substr(workingPosition, REMARKS_LENGTH));
    workingPosition += REMARKS_LENGTH + 1;
    
    setZone(line.substr(workingPosition, ZONE_LENGTH));
    workingPosition += ZONE_LENGTH + 1;
    
    setPBG(line.substr(workingPosition, PBG_LENGTH));
    workingPosition += PBG_LENGTH + 1;
    
    setAllegiance(line.substr(workingPosition, ALLEGIANCE_LENGTH));
    workingPosition += ALLEGIANCE_LENGTH + 1;
    
    setStellarData(line.substr(workingPosition, STELLARDATA_LENGTH));
    workingPosition += STELLARDATA_LENGTH + 1;
    
    // anything that has random rolls in it must be done only once per system.
    computeEconomicExtension();
    computeCulturalExtension();

}


bool System::hasTradeClassification(string givenClassification)
{
    return getRemarks().find(tradeClassifications[givenClassification], 0) != string::npos;
}

bool System::hasNavalBase(void)
{
    bool value = false;
    switch(getBase()[0])
    {
        case 'A':
        case 'B':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'P':
        case 'Z':
            value = true;
            break;
                
        default: value = false;
    }
    return value;
}

bool System::hasScoutBase(void)
{
    bool value = false;
    switch(getBase()[0])
    {
        case 'A':
        case 'S':
        case 'V':
        case '2':
            value = true;
            break;
                
        default: value = false;
    }
    return value;
}

int System::getImportanceExtension(void)
{
    int value = 0;
    // per page 435
    if (getStarport() == "A" || getStarport() == "B")
        value += 1;
    else
        if (getStarport() == "D" || getStarport() == "E" || getStarport() == "X")
            value -= 1;
    
    int techLevel = fromHex(getTechLevel());
    if (techLevel > 9 ) // A or more
        value += 1;
    else
        if (techLevel < 9) // 8 or less
            value -= 1;
    
    if (hasTradeClassification("Ag")) value++;
    if (hasTradeClassification("Hi")) value++;
    if (hasTradeClassification("In")) value++;
    if (hasTradeClassification("Ri")) value++;
    
    int population = fromHex(getPopulation());
    value -= (population < 7) ? 7 - population : 0;
    
    bool hNB = hasNavalBase();
    bool hSB = hasScoutBase();
    
    if (hNB && hSB) value += 1;

    return value;
}


string System::getImportanceString(void)
{
    string temp = itoa(getImportanceExtension());
    return temp;
}

string System::isImportant(void)
{
    string value = "";
    int importance = getImportanceExtension();
    if (importance > 3)
        value = "Important";
    else
        if (importance < 1)
            value = "Unimportant";
    return value;
}

int System::getTotalShipsPerWeek(void)
{
    float calculated;
    calculated = pow (10, getImportanceExtension() ) / 100;
    return calculated;
}

void System::computeEconomicExtension(void)
{  // per page 435
    int resources = roll(2);
    if(fromHex(getTechLevel()) > 8)
        resources += getGasGiants() + getBelts();
    int labor = fromHex(getPopulation()) - 1;
    int infrastructure = roll(2) + getImportanceExtension();
    if (hasTradeClassification("Ba") || hasTradeClassification("Di") || hasTradeClassification("Lo"))
        infrastructure = 0;
    if (hasTradeClassification("Ni"))
        infrastructure = roll(1);
    
    int efficiency = flux();
    
    // compute minimum values
    if (resources < 1) resources = 1;
    if (labor < 1) labor = 1;
    if (infrastructure < 1) infrastructure = 1;
    

    computedEconomicExtension = itoh(resources) + itoh(labor) + itoh(infrastructure) + (efficiency > -1 ? "+"  : "" ) +  itoa(efficiency);
        // multiply the whole thing out
    if (efficiency == 0) efficiency = 1;
    computedResourceUnits = itoa(resources * labor * infrastructure * efficiency);
    return;
}

string System::getEconomicExtension(void)
{
    return computedEconomicExtension;
}

string System::getResourceUnits(void)
{
    return computedResourceUnits;
}

int System::getPopulationPBG()
{
    return fromHex(getPBG().substr(0,1));
}

int System::getBelts()
{
    return fromHex(getPBG().substr(1,1));
}

int System::getGasGiants()
{
    return fromHex(getPBG().substr(2,1));
}

void System::computeCulturalExtension(void)
{
    int homogeneity = fromHex(getPopulation()) + flux();
    int acceptance = fromHex(getPopulation()) + getImportanceExtension();
    int strangeness = 5 + flux();
    int symbols = fromHex(getTechLevel()) + flux();
    
    if (homogeneity < 1) homogeneity = 1;
    if (acceptance < 1) acceptance = 1;
    if (strangeness < 1) strangeness = 1;
    if (symbols < 1) symbols = 1;
    
    computedCulturalExtension = itoh(homogeneity) + itoh(acceptance) + itoh(strangeness) + itoh(symbols);
}

string System::getCulturalExtension()
{
    return computedCulturalExtension;
}