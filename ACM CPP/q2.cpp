#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string adjustment;
	string line;
	vector<string> image;
	vector<string> temp;
	cin >> adjustment;
	if (adjustment.compare("rotate") == 0)
	{
		cin >> adjustment;
	}
	getline(cin, line);
	while(getline(cin,line))
	{
		image.push_back(line);
	}
	int size = image.size();
	if (adjustment.compare("horizontal") == 0)
	{
		for (int i = 0; i < size; i++)
		{
			reverse(image[i].begin(), image[i].end());
		}
	}
	else if(adjustment.compare("vertical") == 0)
	{
		for (int i = 0; i < size; i++)
		{
			temp.push_back(image[size - 1 - i]);
		}
		image = temp;
	}
	else if (adjustment.compare("left") == 0)
	{
		string tempStr;
		int len = image[0].size();
		for (int i = 0; i < len; i++)
		{
			tempStr = "";
			for (int j = 0; j < size; j++)
			{
				tempStr += image[j][len - i - 1];
			}
			temp.push_back(tempStr);
		}
		image = temp;
	}
	else if (adjustment.compare("right") == 0)
	{
		string tempStr;
		int len = image[0].size();
		for (int i = 0; i < len; i++)
		{
			tempStr = "";
			for (int j = 0; j < size; j++)
			{
				tempStr += image[j][i];
			}
			temp.push_back(tempStr);
		}
		image = temp;
	}

	for (int i = 0; i < size; i++)
	{
		cout << image[i] << endl;
	}
	return 0;
}