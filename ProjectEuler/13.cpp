#include <vector>
#include <iostream>

using namespace std;

class MyInt
{
	friend MyInt operator+(const MyInt& x, const MyInt& y);
	friend ostream& operator<<(ostream& os, const MyInt& x);
	public:
		MyInt();
		MyInt(string);
		~MyInt();
		MyInt& operator=(const MyInt& x);
		MyInt(const MyInt&);
	private:
	
		int max, current;
		char* ary;
	
	
};

MyInt::MyInt(const MyInt& x)
{
	max = x.max;
	current = x.current;
	ary = new char[max];
	for (int i = 0; i < current; i++)
	{
		ary[i] = x.ary[i];
	}
}
MyInt& MyInt::operator=(const MyInt& x)
{
	if (this != &x)
	{
		delete[] ary;
		max = x.max;
		current = x.current;
		ary = new char[max];
		for (int i = 0; i < current; i++)
		{
			ary[i] = x.ary[i];
		}
	}
	return *this;
}
MyInt::MyInt()
{
	max = current = 1;
	ary = new char[1];
	ary[0] = 0;
}
MyInt::~MyInt()
{
	delete[] ary;
}
ostream& operator<<(ostream& os, const MyInt& x)
{
	for (int i = 0; i < x.current; i++)
	{
		os << (int)x.ary[x.current - i - 1];
	}
	return os;
}

MyInt operator+ (const MyInt& x, const MyInt& y)
{
	int newMax;
	if (x.current >= y.current)
	{
		newMax = x.current;
	}
	else
	{
		newMax = y.current;
	}
	MyInt e;
	e.max = e.current = newMax + 1;
	e.ary = new char[e.max];
	int carry = 0;
	for (int i = 0; i < newMax; i++)
	{
		if (x.current > i && y.current > i)
		{
			int sum = carry + x.ary[i] + y.ary[i];
			e.ary[i] = sum % 10;
			carry = sum / 10;
		}
		else if (x.current > i)
		{
			int sum = carry + x.ary[i];
			e.ary[i] = sum % 10;
			carry = sum / 10;
		}
		else if (y.current > i)
		{
			int sum = carry + y.ary[i];
			e.ary[i] = sum % 10;
			carry = sum / 10;
		}
	}
	if (carry > 0)
	{
		e.ary[newMax] = 1;
	}
	else
	{
		e.current--;
	}
	return e;
}

MyInt::MyInt(string s)
{
	max = current = 50;
	ary = new char[max];
	for (int i = 0; i < 50; i++)
	{
		ary[50 - i - 1] = s[i] - '0';
	}
}


int main()
{
	vector<MyInt*> numbers;
	
	string input;
	cin >> input;
	for (int i = 0; i < 100; i++)
	{
		string current = "";
		for (int j = 0; j < 50; j++)
		{
			current += input[i*50 + j];
		
		}
		MyInt* next = new MyInt(current);
		numbers.push_back(next);
	}
	MyInt answer;
	for (int i = 0; i < 100; i++)
	{
		cout << *numbers[i] << endl;
		answer = *numbers[i] + answer;
	}
	cout << answer << endl;
	
	
	
	return 0;
}