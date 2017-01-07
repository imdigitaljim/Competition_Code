#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool vals[2147483];
	for (int i = 0; i < 2147483; i++)
	{
		vals[i] = true;
	}
	vals[0] = vals[1] = false;
	cout << "set trues" << endl;
	int len = sqrt(2147483);
	for (int i = 2; i < len; i++)
	{
		if (vals[i])
		{
			for (int j = i*i; j < 2147483; j += i)
			{
				vals[j] = false;
			}
		}	
	}
	int myVal = 0;
	for (int i = 0; i < 2147483; i++)
	{
		if (vals[i])
		{
			myVal++;
			if (myVal == 10001)
			{
				cout << i << endl;
				break;
			}
		}
	}
	cout << myVal << "is the 10001"<< endl;
	
	
	return 0;
}