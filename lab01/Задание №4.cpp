#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int calc()
{
	int a, b,c,q;
	double s, k;
	cout << " What are the numbers?" << endl;
	a=check();
	b = check();
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
	cin >> c;
	cout << "Your answer:" << c << endl;
	switch(c)
	{
	case 1:
		{
			s = a + b;
		}
	case 2:
		{
			s = a - b;
		}
	case 3:
		{
			s = a * b;
		}
	case 4:
		{
			s = a / b;
		}
	case 5:
		{
			s = pow(a, 2);
			k = pow(b, 2);
		}
	case 6:
		{
			s = sqrt(a);
			k = sqrt(b);
		}
	case 7:
		{
			cout << "What log are you want?" << endl;
			q = check();
			s = log(a) / log(q);
			k = log(b) / log(q);
		}
	}
	if (k == 0)
	{
		cout << "Result=" << s << endl;
	}
	else
	{
		cout << "Result = " << s << ";" << k << endl;
	}
	return(1);
}
float fractional()
{
	float a, b,s,k;
	char c;
	cout << " What are the numbers?" << endl;
	a = check();
	b = check();
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
	cin >> c;
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
	}
	case 3:
	{
		s = a * b;
	}
	case 4:
	{
		s = a / b;
	}
}
		cout << "Result=" << s << endl;
		return(1);
}

int main(int argc, char argv[])
{
	char r;
	label:
	cout << "Hello, my dear.Are you want to enter fractional numbers?(yes or no)" << endl;
	cin >> r;
	if (r == 'yes')
	{
	fractional();
	}
	else
	{
		calc();
	}
	cout << "Do you want to try again? y/n" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto label;
	}
	system("pause");
	return(1);
}