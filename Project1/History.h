//
//  History.h
//  Project1
//
//  Created by Samuel Donner on 1/7/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//
#include "globals.h"
#ifndef History_h
#define History_h
class Arena;

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    int numberGrid[MAXROWS][MAXCOLS];
};

#endif /* History_h */
