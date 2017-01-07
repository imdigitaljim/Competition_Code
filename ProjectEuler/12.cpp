#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long num = 0;
	unsigned long long triNum = 0;
	while (true)
	{
		num+=1;
		triNum += num;
		int count = 0;
		unsigned long long len = sqrt(triNum);
		for (unsigned long long i = 1; i < len + 1; i++)
		{
			if (triNum % i == 0)
			{
				count+=2;
			}
		}
		if (count > 500)
		{
			cout << triNum << endl;
			break;
		}
	}
	
	
	
	
	return 0;
}