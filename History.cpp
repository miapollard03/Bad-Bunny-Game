#include "History.h"

using namespace std;

History::History(int nRows, int nCols)
	: m_nRows(nRows), m_nCols(nCols)
{
	// This sets my 2D array for my number grid which initalizes the number array to all zeros
	int r, c;
	for (r = 0; r < m_nRows; r++)
	{
		for (c = 0; c < m_nCols; c++)
		{
			m_grid1[r][c] = 0;
		}
	}
	// This sets my 2D array for my character grid which initalizes the number array to all '.'
	int r1, c1;
	for (r1 = 0; r1 < m_nRows; r1++)
	{
		for (c1 = 0; c1 < m_nCols; c1++)
		{
			m_grid[r1][c1] = '.';
		}
	}

}

bool History::record(int r, int c) {

	// This checks if the number of rows and columns are out of bound
	if (r < 1 || r > MAXROWS || c < 1 || c > MAXCOLS)
	{
		return false;
	}
	m_grid1[r - 1][c - 1]++;

	// This series of if-else statements shows the bounds of the letters that we will use to represent how many 
	// carrots were dropped in one spot or more. I use a number grid and a character grid to relate the two
	// in order to increment the ASCII value to change the letter from A, B, C....
	if (m_grid1[r - 1][c - 1] == 1)
	{
		m_grid[r - 1][c - 1] = 'A';
		return true;
	}
	
	else if (m_grid1[r - 1][c - 1] == 26)
		return true;
	
	else
	{
		m_grid[r - 1][c - 1]++;
		return true;
	}

}

void History::display() const {
	clearScreen(); // Clears the screen from the active map of the game
	
	// This draws out the character grid based of what the record function has accumulated
	int r, c;
	for (r = 0; r < m_nRows; r++)
	{
		for (c = 0; c < m_nCols; c++)
			cout << m_grid[r][c];
		cout << endl;
	}
	cout << endl;
	

}