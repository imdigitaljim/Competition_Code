#include <iostream>

using namespace std;

int main()
{
	int c = 0;
	for (int a = 1; a < 1000; a++)
	{
		for (int b = 1; b < 1000; b++)
		{
			for (int c = 1; c < 1000; c++)
			{
				if (a + b + c == 1000 && a * a + b * b == c * c)
				{
					cout << "a:" << a << endl;
					cout << "b:" << b << endl;
					cout << "c:" << c << endl;
					cout << a * b * c << endl;
				}
			}
		}
	}
	
	return 0;
}