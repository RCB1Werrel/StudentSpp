#include "pch.h"

#include <iostream>
using namespace std;
int main(int argc, char argv[])
{
	int a, b, c, s,k;
	char r;
	label:
	cout << "Hello, my dear. What are the numbers?" << endl;
	cin >> a;
	cin >> b;
	cout << "Number 1:" << a << endl;
	cout << "Number 2:" << b << endl;
	cout << "What do you want to do ?" << endl;
	cout << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /"  <<endl ;
	cin >> c;
	cout << "Your answer:" << c << endl;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		cout << "Result = " << s << endl;
		
	}
	case 2:
	{
		s = a - b;
		cout << "Result = " << s << endl;
		
	}
	case 3:
	{
		s = a * b;
		cout << "Result = " << s << endl;
		
	}
	case 4:
	{s = a / b;
	cout << "Result = " << s << endl;
	
	}
	
	cout << "Do you want to try again? y/n" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto label;
	}
	system("pause");
	return 1;
	}
}