// prog1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//#include"division.cpp"
#include<iostream>
#include"addition.cpp"
#include"subtract.cpp"
#include"multiply.cpp"
using namespace std;
int main()
{
	int a, b;
	cout << "enter the vaslues a and b";
	cin >> a >> b;
	cout << "1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n";
	int sel;
	cin >> sel;
	if (sel == 1)
	{
		cout << add(a, b) << endl;
	}
	else if (sel == 2)
	{
		cout << sub(a, b) << endl;
	}
	else if (sel == 3)
	{
		cout << mul(a, b) << endl;
	}
	/*else if (sel == 4)
	{
		cout << div(a, b) << endl;
	}*/
	system("pause");
    return 0;
}

