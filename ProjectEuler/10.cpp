#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool primes[2000000];
	for (int i = 0; i < 2000000; i++)
	{
		primes[i] = true;
	}
	primes[0] = primes[1] = false;
	int sqrtval = sqrt(2000000);
	for (int i = 2; i < sqrtval; i++)
	{
		if (primes[i])
		{
			for (int j = i * i; j < 2000000; j+=i)
			{
				primes[j] = false;
			}
		}
	}
	long sum = 0;
	for (int i = 0; i < 2000000; i++)
	{
		if (primes[i])
		{
			sum+=i;
		}
	}
	cout << sum << endl;
	
	return 0;
}