/* 
 * File:   main.cpp
 * Author: tonyreynolds
 *
 * Created on May 26, 2013, 2:24 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "Sector.h"

using namespace std;


Sector *readASector(const char *sectorName, const char *sectorFileName) {
    Sector *sector = new Sector(sectorName, sectorFileName);
    sector->readFile();
    return sector;
}


/*
 * 
 */
int main(int argc, char** argv) {
    
    Sector *workingSector = readASector("Trojan Reach", "trojan reach.txt");
    return 0;
}

