#include <iostream>

using namespace std;

int main()
{
	long long result = 2;
	
	int x = 1, y = 2, z;
	while (z <= 4000000)
	{
		z = y + x;
		x = y;
		y = z;
		if (y % 2 == 0)
		{
			result += y;
		}
	}	
	
	cout << result << endl;
	return 0;
}