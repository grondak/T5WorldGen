/* 
 * File:   SectorFile.h
 * Author: tonyreynolds
 *
 * Created on May 26, 2013, 2:33 PM
 */

#ifndef SECTORFILE_H
#define	SECTORFILE_H

#include <string>
#include <iostream>
#include <list>

using namespace std;

class SectorFile {
public:
    SectorFile();
    SectorFile(const SectorFile& orig);
    virtual ~SectorFile();
    
    void setFileName(string giveFileName);
    int read(void);
    list<string>::iterator getWorldLinesIterator(void);
    list<string>::iterator getWorldLinesEnd(void);
    list<string>::iterator getCommentLinesIterator(void);
    list<string>::iterator getCommentLinesEnd(void);
private:
    string fileName;
    list<string> commentLines;
    list<string> worldLines;
    
    void dumpData(void);
    

};

#endif	/* SECTORFILE_H */

