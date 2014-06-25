#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> uglyNumber;

int myMin(int x, int y, int z){
	if (x <= y && x <= z)
		return x;
	else if (y <= x && y <= z)
		return y;
	else
		return z;
}

void UglyNumber(int x){
	int next2 = 2;
	int next3 = 3;
	int next5 = 5;
	int i2 = 0;
	int i3 = 0;
	int i5 = 0;
	for (int i = 1; i < x; i++){
		int next_ugly = myMin(next2, next3, next5);
		uglyNumber.push_back(next_ugly);
		if (next_ugly == next2)
			next2 = uglyNumber[++i2] * 2;
		if (next_ugly == next3)
			next3 = uglyNumber[++i3] * 3;
		if (next_ugly == next5)
			next5 = uglyNumber[++i5] * 5;
	}
}

int main() {
	uglyNumber.push_back(1);
	UglyNumber(1500);
	cout << "The 1500'th ugly number is " << uglyNumber[uglyNumber.size() - 1] << ".\n";
	return 0;
}