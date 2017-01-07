#include <iostream>

using namespace std;

int main()
{
	
	long long lowestNum = 2520;
	while (true)
	{
		while (true)
		{
			lowestNum+= 20;
			long testValue = lowestNum;
			unsigned sum = 0;
			while (testValue > 0)
			{
				sum += testValue % 10;
				testValue /= 10;
			}
			if (sum % 9 == 0)
			{
				break;
			}		
		}
		bool isFound = true;
		for (long i = 1; i <= 20; i++)
		{
			if (lowestNum % i != 0)
			{
				isFound = false;
				break;
			}
		}
		if (isFound)
		{
			cout << "finished!" << lowestNum << endl;
			return 0;
		}

	}
	
	
	
	return 0;
}