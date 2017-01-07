#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int len = input.size();
	int currentBestIndex = 0;
	long currentBestSum = -1;
	for (int i = 0; i < len; i++)
	{
		if (i + 13 < len)
		{
			long sum = 1;
			for (int j = i; j < i + 13; j++)
			{
				if(input[j] == '0')
				{
					i = j + 1;
					break;
				}		
				sum *= input[j] - '0';
			}	
			if (sum > currentBestSum)
			{
				currentBestIndex = i;
				currentBestSum = sum;
			}
		}
	}
	cout << endl;
	cout << "product:" << currentBestSum << endl;
	
	return 0;
}