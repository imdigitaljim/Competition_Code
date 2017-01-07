#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long n = 100;
	while (n % 2 == 0)
	{
		n = n / 2;
		cout << 2 << endl;
	}
	
	for (long i = 3; i <= sqrt(n); i+=2)
	{
		while (n % i == 0)
		{
			n = n / i;
			cout << i << endl;
		}

	}
	if ( n > 2 )
	{
		cout << n << endl;
	}
	return 0;
}