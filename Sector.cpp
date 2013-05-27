/* 
 * File:   Sector.cpp
 * Author: tonyreynolds
 * 
 * Created on May 26, 2013, 2:33 PM
 */

#include "System.h"
#include "Sector.h"
#include "SectorFile.h"


Sector::Sector() {
}

Sector::Sector(const char *givenSectorName, const char *givenFileName) {
    setSectorName(givenSectorName);
    setFileName(givenFileName);
}

Sector::Sector(const Sector& orig) {
}

Sector::~Sector() {
}

void Sector::setSectorName(const char *givenSectorName) {
    sectorName = givenSectorName;
}

void Sector::setFileName(const char *givenFileName) {
    fileName = givenFileName;    
}


void Sector::readFile(void) {
    inputSectorFile.setFileName(fileName);
    int result = inputSectorFile.read();

    for(list<string>::iterator it=inputSectorFile.getWorldLinesIterator(); it != inputSectorFile.getWorldLinesEnd(); it++)
    {
        systems.push_back(new System(*it));
    }
    
    for(list<System *>::iterator it2 = systems.begin(); it2 != systems.end(); it2++)
    {
        (*it2)->parseLine();
    }
    
    for(list<System *>::iterator it2 = systems.begin(); it2 != systems.end(); it2++)
    {
        cout << (*it2)->toString() << endl;
    }
}