#include <iostream>
#include <math.h>

using namespace std;

int GetLength(int*);

int main()
{
	int input[2];
	int length;
	while (cin >> input[0] >> input[1])
	{
		length = GetLength(input);
		cout << input[0] << " " << input[1] << " " << length << endl;
	}
	return 0;
}

int GetLength(int* input)
{
	int highest = 0;
	int counter = 1;
	int current;
	int span;
	int adjustment = 1;
	if (input[1] > input[0])
	{
		span = input[1] - input[0];
	}
	else
	{
		span = input[0] - input[1];
		adjustment = -1;
	}
	for (int i = 0; i <= span; i++)
	{
		counter = 1;
		current = input[0] + (i * adjustment);
		while (current != 1)
		{
			counter++;
			if (current % 2 != 0)
			{
				current = 3 * current + 1;

			}
			else
			{
				current /= 2;
			}
		}
		if (counter > highest)
		{
			highest = counter;
			
		}
	}
	return highest;
}