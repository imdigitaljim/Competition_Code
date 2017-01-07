#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string input;
	cin >> input;
	vector<vector<int> > grid;
	int current = 0;
	for (int i = 0; i < 20; i++)
	{
		vector<int> row;
		for (int j = 0; j < 20; j++)
		{
			int val = (input[current++] - '0') * 10 + (input[current++] - '0');
			row.push_back(val);
		}
		grid.push_back(row);
	}
	int product, bestproduct = -1;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (j - 4 > 0 && i + 4 < 20)
			{
				product = 1;
				for (int k = 0; k < 4; k++)
				{
					product *= grid[i + k][j - k];
				}
				if (product > bestproduct)
				{
					bestproduct = product;
				}
			
			}
			if (j + 4 < 20 && i + 4 < 20)
			{
				product = 1;
				for (int k = 0; k < 4; k++)
				{
					product *= grid[i + k][j + k];
				}
				if (product > bestproduct)
				{
					bestproduct = product;
				}
			}
			if (j + 4 < 20)
			{
				product = 1;
				for (int k = 0; k < 4; k++)
				{
					product *= grid[i][j + k];
				}
				if (product > bestproduct)
				{
					bestproduct = product;
				}
			}
			if (i + 4 < 20)
			{
				product = 1;
				for (int k = 0; k < 4; k++)
				{
					product *= grid[i + k][j];
				}
				if (product > bestproduct)
				{
					bestproduct = product;

				}
			}
		}
		
	}
	cout << bestproduct << endl;
}
	