/* 
 * File:   Sector.h
 * Author: tonyreynolds
 *
 * Created on May 26, 2013, 2:33 PM
 */

#ifndef SECTOR_H
#define	SECTOR_H

#include <string>
#include <iostream>
#include <list>
#include "SectorFile.h"
#include "System.h"

class Sector {
public:
    Sector();
    Sector(const char *givenSectorName, const char *givenFileName);
    Sector(const Sector& orig);
    virtual ~Sector();
    void setSectorName(const char *givenSectorName);
    void setFileName(const char *givenFileName);
    void readFile(void);

private:
    string sectorName;
    string fileName;
    SectorFile inputSectorFile;
    list<System *> systems;
};

#endif	/* SECTOR_H */

