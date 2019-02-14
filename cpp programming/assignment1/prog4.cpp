#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return (a+b);
}
inline int subtract(int a,int b)
{
	return (a-b);
}
inline int multiply(int a,int b)
{
	return (a*b);
}
inline int divide(int a,int b)
{
	return (a/b);
}
int main()
{
    int a,b;
	cin>>a>>b;
	int sum=add(a,b);
	int sub=subtract(a,b);
	int mul=multiply(a,b);
	int div=divide(a,b);
	cout<<"sum is :"<<sum<<endl;
	cout<<"subtraction is :"<<sub<<endl;
	cout<<"multiplication is :"<<mul<<endl;
	cout<<"division is :"<<div<<endl;
    return 0;
}


