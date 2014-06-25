#include <iostream>

using namespace std;

int main()
{
	int n1 = 1;
	int n2 = 2;
	int n3 = 0;
	int total = 2;
	const int fibMax = 4000000;
	while (n3 < fibMax)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0)
		{
			total += n3;
		}
	}
	cout << total << endl;
	return 0;
}