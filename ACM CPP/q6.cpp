#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string line;
	int d,n,s, match;
	cin >> d >> n >> s;
	getline(cin, line);
	vector<string> descript;
	vector<string> returns;
	bool isReturned = false;
	for (int i = 0; i < d; i++)
	{
		cin >> line;
		sort(line.begin(), line.end());
		descript.push_back(line);
		cout << line << endl;
	}
	getline(cin, line);
	while(getline(cin, line))
	{
		cout << line << endl;
		sort(line.begin(), line.end());
		returns.push_back(line);
	}
	bool accepted;
	for (int i = 0; i < returns.size(); i++)
	{
		accepted = false;
		isReturned = false;
		vector<int> matches;
		for (int j = 0; j < returns[i].size(); j++)
		{
			for (int k = 0; k < descript.size(); k++)
			{
				if (
			}
		
		}
		

		if (isReturned)
		{
			cout << "y" << endl;
		}
		else
		{
			cout << "n" << endl;
		}
	
	}
	
	return 0;
}