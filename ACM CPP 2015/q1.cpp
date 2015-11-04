#include <iostream>
#include <string>

using namespace std;

int main()
{
	string three = "Three, Sir!";
	string carry = "Carry on.";
	int num1, num2, num3;
	while(cin >> num1 >> num2 >> num3)
	{
		if (num1 % 10 == 5)
		{
			if (num1 == num2 + num3 ||
			num1 == num3 + num2 ||
			num1 == num2 - num3 ||
			num1 == num3 - num2 ||
			num1 == num2 * num3 ||
			num1 == num3 * num2 ||
			num1 == num2 / num3 ||
			num1 == num3 / num2 ||
			num1 == num2 % num3 ||
			num1 == num3 % num2)
			{
				cout << carry << endl;
			}
			else 
			{
				cout << three << endl;
			}
		}
		else
		{
			if (num3 % 10 == 5)
			{
				swap(num3, num2);
			}
			if (num1 == num2 + num3 ||
			num1 == num3 + num2 ||
			num1 == num2 - num3 ||
			num1 == num3 - num2 ||
			num1 == num2 * num3 ||
			num1 == num3 * num2 ||
			num1 == num2 / num3 ||
			num1 == num3 / num2 ||
			num1 == num2 % num3 ||
			num1 == num3 % num2)
			{
				cout << carry << endl;
			}
			else 
			{
				cout << three << endl;
			}
		}
		
		
		
	}
	return 0;
}