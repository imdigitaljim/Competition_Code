#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int search(map<char, vector<char>>&, int);
void searchNode(map<char, bool>&, int);
struct knight
{
	char current;
	int moves = 0;
};

int main()
{
	string line;
	int s, n, p;
	map<char, vector<char>> nodes;
	while(getline(cin, line))
	{
		stringstream ss(line);
		vector<string> dataset;
		ss >> s >> n >> p;
		while (ss >> line)
		{
			if (nodes[line[1]].size() == 0)
			{
				nodes[line[1]].push_back(line[1]);
			}
			nodes[line[0]].push_back(line[1]);
			
		}
		cout << search(nodes, n) << endl;
	}
	return 0;
}	



int search(map<char, vector<char>>& m, int knights)
{
	map<char, bool> visited;
	map<char, int> paths;
	
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		visited[it->first] = false;
		paths[it->first] = (it->second).size();
	}
	int days = 0;
	vector<knight> kList;
	for (int i = 0; i < knights; i++)
	{
		
	}
	return m['A'].size();
}