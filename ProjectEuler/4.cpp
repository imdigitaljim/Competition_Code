#include <iostream>

using namespace std;

int main()
{
	
	unsigned long sumOfSquares = 0;
	unsigned long squareOfSum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sumOfSquares += i * i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	
	cout << squareOfSum - sumOfSquares << endl;
	return 0;
}