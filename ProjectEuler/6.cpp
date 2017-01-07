#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int mymax = -1;
	for (int i = 100; i < 999; i++)
	{
		for (int j = 100; j < 999; j++)
		{
			int num = i * j;
			int temp = num;
			vector<int> stack;
			while (temp > 0)
			{
				stack.push_back(temp % 10);
				temp /= 10;
				
			}
			int len = stack.size();
			bool isPalindrome = true;
			temp = num;
			for (int k = 0; k < len; k++)
			{
				if (temp % 10 != stack[stack.size() - 1])
				{
					isPalindrome = false;
					break;
				}
				temp /= 10;
				stack.pop_back();
			}
			if (isPalindrome)
			{
				mymax = max(mymax, num);
			}						
		}
	}
	
	cout << mymax << endl;


	
	return 0;
}