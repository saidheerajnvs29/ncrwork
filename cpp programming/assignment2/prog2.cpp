#include<iostream>
using namespace std;
class student
{
	int rollno,m1,m2,m3,total;
	char grade;
	string name;
	public:
	friend ostream& operator<<(ostream &cout,student s);
	friend istream& operator>>(istream &cin,student &s);
	friend void generate_results(student *,int);
};
ostream& operator<<(ostream &cout,student s)
{
	cout<<"student["<<s.rollno<<"] total:"<<s.total<<"	grade:"<<s.grade; 
	return (cout);
}
istream& operator>>(istream &cin,student &s)
{
	cin>>s.rollno>>s.name>>s.m1>>s.m2>>s.m3; 
	return (cin);
}
void generate_results(student *s,int len)
{
	for(int i=0;i<len;i++)
	{
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		int val=(s[i].m1+s[i].m2+s[i].m3)/3;
		if(val>=60)
		{
			s[i].grade='A';
		}
		else if(val>=50 && val<60)
		{
			s[i].grade='B';
		}
		else if(val>=40 && val<50)
		{
			s[i].grade='C';
		}
		else
		{
			s[i].grade='F';
		}
		cout<<s[i]<<endl;
	}	 
}
int main()
{
	int n;
	cout<<"enter the number of students\n";
	cin>>n;
	student s[20];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}	 
	generate_results(s,n);
	return 0;
}

