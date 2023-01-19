#ifndef HISTORY_H
#define HISTORY_H

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <random>
#include <utility>
#include <cstdlib>
#include "globals.h"

using namespace std;

class History
{

public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;

private:
	int m_nRows;
	int m_nCols;

	int m_grid1[MAXROWS][MAXCOLS];
	char m_grid[MAXROWS][MAXCOLS];
};

#endif