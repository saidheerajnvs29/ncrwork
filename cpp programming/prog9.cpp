#include<iostream>
using namespace std;
void swapval(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
}
void swapref(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
	
}
int main()
{
	cout<<"enter the two numbers to swap\n";
	int a,b;
	cin>>a>>b;
	while(1)
	{
		cout<<"enter the choice\n";
		cout<<"1. Swap using call by value\n2. Swap using call by reference\n";
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"value of a and b before swapping\n"<<a<<" " <<b<<endl;
				swapval(a,b);
				cout<<"value of a and b after swapping\n"<<a<<" " <<b<<endl;
				break;
			case 2:
				cout<<"value of a and b after swapping\n"<<a<<" " <<b<<endl;
				swapref(a,b);
				cout<<"value of a and b after swapping\n"<<a<<" " <<b<<endl;
				break;
			case 3:exit(0);
			default: cout<<"Enter the correct choice\n";
		}	
	}
	return 0;
}

