#include <iostream>

using namespace std;

int main()
{
	unsigned long long chainCount = 0;
	unsigned long long val = -1;
	for (unsigned long long i = 2; i < 1000000; i++)
	{
		unsigned long long j = i;
		unsigned long long current = 0;
		while (j != 1)
		{
			if (j % 2 == 0)
			{
				j /= 2;
			}
			else
			{
				j = j*3 + 1;
			}
			current++;
		}
		if (current > chainCount)
		{
			chainCount = current;
			val = i;
		}
	}
	cout << val << " with " << chainCount << endl;
	
	
	
	
	return 0;
}