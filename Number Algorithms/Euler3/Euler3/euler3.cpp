#include <iostream>
#include <math.h>

using namespace std;

int GetFilter(int);
const float euler3max = 600851475143;
const int maxInt = 500000;

int main()
{
	int largePrime = 0; 
	float ceiling = ceil(sqrt(euler3max));
	GetFilter(largePrime);
	float adder = euler3max / largePrime;

	for (float i = adder; i <= euler3max; i++)
	{
		if (fmod(euler3max, i) == 0)
		{
			cout << i << endl;
		}
	}

}

int GetFilter(int filter)
{
	cout << "started";
	bool isPrime[maxInt/2] = { false };
	int ceiling = ceil(sqrt(maxInt));
	int largePrime = 0;
	isPrime[2] = true;
	isPrime[3] = true;
	for (int i = 1; i <= ceiling; i++)
	{
		for (int j = 1; j <= ceiling; j++)
		{
			int n = (4 * i * i) + (j * j);
			if (n <= maxInt && n % 12 == 1 || n % 12 == 5)
			{
				isPrime[n] = !isPrime[n];
			}
			n = (3 * i * i) + (j * j);
			if (n <= maxInt && (n % 12 == 7))
			{
				isPrime[n] = !isPrime[n];
			}
			n = (3 * i * i) - (j * j);
			if (i > j && n <= maxInt && (n % 12 == 11))
			{
				isPrime[n] = !isPrime[n];
			}

		}
	}
	for (int k = 5; k <= ceiling; k++) {
		if (isPrime[k]) {
			int m = k * k;
			for (int i = m; i <= maxInt; i += m) {
				isPrime[i] = false;
			} 
		} 
	} 

	for (int j = 0; j < maxInt + 1; j++)
	{
		if (isPrime[maxInt + 1 - j] == true)
		{
			largePrime = maxInt - j;
			return largePrime;
		}
	}	
}