/* 
 * File:   SectorFile.cpp
 * Author: tonyreynolds
 * 
 * Created on May 26, 2013, 2:33 PM
 */

#include "SectorFile.h"
#include <iostream>
#include <fstream>
using namespace std;


SectorFile::SectorFile() {
}

SectorFile::SectorFile(const SectorFile& orig) {
}

SectorFile::~SectorFile() {
}

void SectorFile::setFileName(string givenFileName) {
    fileName = givenFileName;
}

int SectorFile::read(void) {
    string line;
    ifstream inFile(fileName.c_str());
    if(inFile.is_open())
    {
        while(inFile.good())
        {
            getline(inFile, line);
            if(line.length() != 0) // tossing out blanks
                if(line[0] == '#') // saving commented lines for later interpretation
                {
                    commentLines.push_back(line);
                }
                else
                {
                    worldLines.push_back(line);
                }
        }
        inFile.close();
    }
    else cout << "Could not open sector file: " << fileName << "." << endl;
    

    return 0;
    
}

void SectorFile::dumpData(void) 
{
    for(list<string>::iterator it=getWorldLinesIterator(); it != worldLines.end(); it++)
        cout << *it << endl;
    for(list<string>::iterator it=getCommentLinesIterator(); it != commentLines.end(); it++)
        cout << *it << endl;
}

list<string>::iterator SectorFile::getWorldLinesIterator(void)
{
    return worldLines.begin();
}

list<string>::iterator SectorFile::getWorldLinesEnd(void)
{
    return worldLines.end();
}

list<string>::iterator SectorFile::getCommentLinesIterator(void)
{
    return commentLines.begin();
}

list<string>::iterator SectorFile::getCommentLinesEnd(void)
{
    return commentLines.end();
}