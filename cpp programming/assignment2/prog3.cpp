#include<iostream>
using namespace std;
class employee
{
	int eno,salary;
	string name;
	public:
	friend ostream& operator<<(ostream &cout,employee e);
	friend istream& operator>>(istream &cin,employee &e);
};
ostream& operator<<(ostream &cout,employee e)
{
	cout<<"employee number :"<<e.eno<<"	employee name :"<<e.name<<"	salary :"<<e.salary; 
	return (cout);
}
istream& operator>>(istream &cin,employee &e)
{
	cin>>e.eno>>e.name>>e.salary; 
	return (cin);
}
int main()
{
	int n;
	cout<<"enter the number of employees\n";
	cin>>n;
	employee e[20];
	for(int i=0;i<n;i++)
	{
		cin>>e[i];
	}	 
	for(int i=0;i<n;i++)
	{
		cout<<e[i]<<endl;
	}
	return 0;
}

