#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <sstream>
using namespace std;


struct Info
{
	string color;
	string name;
	string sname;
	string air;
	string capital;
	Info(string n, string c, string s, string a, string cap)
	{
		sname = s;
		name = n;
		color = c;
		air = a;
		capital = cap;
	}
};

int main()
{
	string quest = "I seek the grail.";
	string ah = "AAAHHHHHHHHH!";
	string line;
	while (getline(cin, line))
	{
		vector<Info> names;
		stringstream ss(line);
		bool isCap = false;
		while(ss >> line)
		{
			int len = line.size();
			if (strncmp(line.c_str(), "Arthur", 1) == 0)
			{
				isCap = true;
				Info inName("Arthur, King of the Britons.", "Gold.", "Arthur","African or European?","Nineveh.");
				names.push_back(inName);
			}
			else if (strncmp(line.c_str(), "Bedevere", 1) == 0)
			{
				isCap = true;
				Info inName("Sir Bedevere of Camelot.", "Blue.","Bedevere","African or European?","Nineveh.");
				names.push_back(inName);
			}
			else if (strncmp(line.c_str(), "Lancelot", 1) == 0)
			{
				if (isCap)
				{
					Info inName("Sir Lancelot of Camelot.", "Blue.","Lancelot","I don't know that!\nAAAHHHHHHHHH!","Nineveh.");
					names.push_back(inName);
				}
				else
				{
					Info inName("Sir Lancelot of Camelot.", "Blue.","Lancelot","I don't know that!\nAAAHHHHHHHHH!","I don't know that!\nAAAHHHHHHHHH!");
					names.push_back(inName);
				}
			}
			else if (strncmp(line.c_str(), "Robin", 1) == 0)
			{
				if (isCap)
				{
					Info inName("Sir Robin of Camelot.", "Yellow.","Robin","I don't know that!\nAAAHHHHHHHHH!","Nineveh.");
					names.push_back(inName);
				}
				else
				{
					Info inName("Sir Robin of Camelot.", "Yellow.","Robin","I don't know that!\nAAAHHHHHHHHH!","I don't know that!\nAAAHHHHHHHHH!");
					names.push_back(inName);
				}
			}
			else if (strncmp(line.c_str(), "Galahad", 1) == 0)
			{
				if (isCap)
				{
					Info inName("Sir Galahad of Camelot.", "Yellow.", "Galahad","I don't know that!\nAAAHHHHHHHHH!","Nineveh.");
					names.push_back(inName);
				}
				else
				{
					Info inName("Sir Galahad of Camelot.", "Yellow.", "Galahad","I don't know that!\nAAAHHHHHHHHH!","I don't know that!\nAAAHHHHHHHHH!");
					names.push_back(inName);
				}

			}	
		}

		bool isSuccess;
		int lastToPass = -1;
		bool isEnd = false;
		for (int i = 0; i < names.size(); i++)
		{
			isSuccess = false;
			for (int j = 0 ; j < 3; j++)
			{
				cin >> line >> line >> line >> line;
				if (line == "name?")
				{
					cout << names[i].name << endl;
				}
				else if (line == "quest?")
				{
					cout << quest << endl;
				}
				else if (line == "favorite")
				{
					if (names[i].sname == "Galahad")
					{
						cout << lastToPass << endl;
						if (lastToPass == -1)
						{
							cout << names[i].color << endl;
						}
						else
						{
							cout << names[lastToPass].color << endl;
						}
						if (lastToPass > -1 && names[lastToPass].color != names[i].color)
						{
							cout << ah << endl;
							while (j < 3)
							{
								getline(cin, line);
								j++;
							}
							isSuccess = false;
							break;
						}
					}
					else
					{
						cout << names[i].color << endl;
					}
				}
				else if (line == "capital")
				{
					cout << names[i].capital << endl;
					if (names[i].capital[0] != 'N')
					{
						while (j < 3)
						{
							getline(cin, line);
							j++;
						}
						isSuccess = false;
						break;
					}
				}
				else if (line == "airspeed")
				{
					cout << names[i].air << endl;
					if (names[i].air == "African or European?")
					{
						isEnd = true;
					}
					else
					{
						while (j < 3)
						{
							getline(cin, line);
							j++;
						}
						isSuccess = false;
						break;
					}
				}
				if (j == 2)
				{
					isSuccess = true;
				}
				getline(cin, line);
			}
			if (isEnd)
			{
				break;
			}
			if (isSuccess)
			{
				lastToPass = i;
			}
		}
	}
	return 0;
}