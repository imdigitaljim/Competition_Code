#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> inputLib;
	vector<string> adjustLib;
	vector<bool> hasMatch;
	string input;
	string insert2Vector;
	int length;
	while (input != "#")
	{
		cin >> input;
		if (input == "#")
		{
			break;
		}
		inputLib.push_back(input);
		hasMatch.push_back(false);
	}
	length = inputLib.size();
	sort(inputLib.begin(), inputLib.end());
	for (int i = 0; i < length; i++)
	{
		insert2Vector = "";
		for (int j = 0; j < inputLib[i].size(); j++)
		{
			string add(1, tolower(inputLib[i][j]));
			insert2Vector.append(add);
		}
		sort(insert2Vector.begin(), insert2Vector.end());
		for (int k = 0; k < adjustLib.size(); k++)
		{
			if (adjustLib[k].compare(insert2Vector) == 0)
			{
				hasMatch[k] = true;
				hasMatch[i] = true;
			}
		}
		adjustLib.push_back(insert2Vector);
	}
	for (int i = 0; i < length; i++)
	{
		if (!hasMatch[i])
		{
			cout << inputLib[i] << endl;
		}

	}
	return 0;
}

