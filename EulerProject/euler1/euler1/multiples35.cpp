#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int max = 1000;
	int total = 0;
	for (int i = 0; i < max; i++)
	{
		if (i % 3 == 0)
		{
			cout << "[" << i << "]";
			total += i;
		}
		else if (i % 5 == 0)
		{
			cout << "[" << i << "]";
			total += i;
		}
	}
	cout << "The final sum is: " << total;
		return 0;
}