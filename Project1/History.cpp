#include "History.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    for( int r = 0; r < m_rows; r++ )
        for( int c = 0; c < m_cols; c++ )
            numberGrid[r][c] = 0;
    
}

bool History::record(int r, int c)
{
    if( r < 0 || r > m_rows || c < 0 || c > m_cols )
    {
        return false;
    }
    else
    {
        numberGrid[r-1][c-1]++;
        return true;
    }
}

void History::display() const
{
    char displayGrid[MAXROWS][MAXCOLS];
    for( int r = 0; r < m_rows; r++ )
        for( int c = 0; c < m_cols; c++ )
            displayGrid[r][c] = '.';
    
    for( int r = 0; r < m_rows; r++ )
    {
        for( int c = 0; c < m_cols; c++ )
        {
            if( numberGrid[r][c] != 0 )
            {
                displayGrid[r][c] = 64 + numberGrid[r][c];
            }
        }
    }
    clearScreen();
    for( int r = 0; r < m_rows; r++ )
    {
        cout<<endl;
        for( int c = 0; c < m_cols; c++ )
        {
            cout<<displayGrid[r][c];
        }
    }
    cout << endl;
}