#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;


struct Box{
	
	Box()
	{
		top = bottom = left = right = 1;
	}
	unsigned long long top, left, right, bottom;
};


int main()
{
	
	vector<vector<Box> > grid;
	for (int i = 0; i < 20; i++)
	{
		vector<Box> temp; 
		for (int j = 0; j < 20; j++)
		{
			Box mybox;
			temp.push_back(mybox);
		}
		grid.push_back(temp);
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (j == 0 && i == 0)
				continue;
			if (j > 0)
			{
				grid[i][j].left = grid[i][j - 1].right;
				grid[i][j].bottom = grid[i][j].left + grid[i][j - 1].bottom;
			}
			if (i > 0)
			{
				grid[i][j].top = grid[i - 1][j].bottom;
				grid[i][j].right = grid[i][j].top + grid[i - 1][j].right;		
			}
		}
	}
	cout << grid[19][19].bottom + grid[19][19].right << endl;
	
	
	return 0;
}