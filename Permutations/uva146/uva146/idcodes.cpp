#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string NextCode(vector<char>, string);

int main()
{
	vector<char> idChar;
	string input = "";
	int length;
	bool noSuccessor = true;
	while (input != "#")
	{
		cin >> input;
		if (input == "#")
		{
			break;
		}
		idChar.clear();
		noSuccessor = true;
		length = input.length() - 1;
		idChar.push_back(input[length]);
		for (int i = 0; i < length; i++)
		{
			if (input[length - i - 1] < idChar.back())
			{
				idChar.push_back(input[length - i - 1]);
				input.erase(length - (i + 1));
				input = NextCode(idChar, input);
				noSuccessor = false;
				break;
			}
			idChar.push_back(input[length - 1 - i]);
		}
		if (noSuccessor)
		{
			input = "No Successor";
		}
		cout << input << endl;
	}


	return 0;
}

string NextCode(vector<char> vChars, string input)
{
	char c = vChars.back();
	char nextChar;
	string order;
	int remove = 0;
	nextChar = 'z';
	for (int i = 0; i < vChars.size() - 1; i++)
	{
		if (vChars[i] > c && vChars[i] < nextChar)
		{
			nextChar = vChars[i];
			remove = i;
		}
	}
	vChars.erase(vChars.begin() + remove);
	string add(1, nextChar);
	order.append(add);
	sort(vChars.begin(), vChars.end());
	for (int i = 0; i < vChars.size(); i++)
	{
		string addi(1, vChars[i]);
		order.append(addi);
	}
	input.append(order);
	return input;
}




/*
char buffer[80];
cin.getline(buffer);
while(strcmp(buffer, "#") != 0)
{
        if(next_permutation(buffer, buffer+strlen(buffer))
                cout << buffer << endl;
        else
                cout << "No Successor" << endl;
        cin.getline(buffer);
}

*/