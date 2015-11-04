#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;
	bool isInvalid = false;
	while (cin >> num)
	{	
		int count = 0;
		int temp = num;
		for (int i = 0; i < num; i++)
		{
			temp = i;
			if (temp % 10 != 3)
			{
				isInvalid = true;
			}
			else
			{
				int prev = -1;
				for (int j = 0; temp > 0; j++)
				{
					if (temp % 10 == 3 && prev == 4)
					{
						isInvalid = true;
						break;
					}
					if (temp % 10 == 5)
					{
						isInvalid = true;
						break;
					}
					if (temp % 10 == 2 && prev != 3)
					{
						isInvalid = true;
						break;
					}
					prev = temp % 10;
					temp /= 10;
				}
			
			}

			if (!isInvalid)
			{
				count++;
			}
			isInvalid = false;
		}
		cout << count << endl;
	
	}
	return 0;
}