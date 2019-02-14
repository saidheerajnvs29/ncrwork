#include<iostream>
using namespace std;
class student
{
	string name;
	char grade;
	int m1,m2,m3;
	public:
	void set_data(string n,int marks1,int marks2,int marks3)
	{
		name=n;
		m1=marks1;
		m2=marks2;
		m3=marks3;
	}
	float calculateAvg()
	{
		float res=(m1+m2+m3)/(float)3;
		return res;
	}
	void computeGrade()
	{
		float res=(m1+m2+m3)/(float)3;
		if(res>60)
		{	
			grade='A';
		}
		else if(res>50 && res<=60)
		{
			grade='B';
		}
		else if(res>40 && res<=50)
		{
			grade='C';
		}
		else
		{
			grade='F';
		}
	}
	void display()
	{
		cout<<"the student name is "<<name<<endl;
		cout<<"the grade is "<<grade<<endl;
		cout<<"subject 1= "<<m1<<endl;
		cout<<"subject 2= "<<m2<<endl;
		cout<<"subject 3= "<<m3<<endl;
	}
	
};
int main()
{
	student s;
	s.set_data("dheeraj",40,50,60);
	cout<<"the average of student is "<<s.calculateAvg()<<endl;
	s.computeGrade();
	s.display();
	return 0;
}

