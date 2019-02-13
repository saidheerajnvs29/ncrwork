#include<iostream>
using namespace std;
class CollegeCourse
{
	string name,grade;
	int marks1,marks2,marks3;
	public:
	void set_data(string n,string g,int m1,int m2,int m3)
	{
		name=n;
		grade=g;
		marks1=m1;
		marks2=m2;
		marks3=m3;
	}
	float calculate_avg()
	{
		float avg=(marks1+marks2+marks3)/(float)3;
		return avg;
	}
	void compute_grade()
	{
		float avg=(marks1+marks2+marks3)/(float)3;
		if(avg>60)
		{
			grade="1";
		}
		else if(avg>50 && avg<=60)
		{
			grade="2";
		}
		else if(avg>40 && avg<=50)
		{
			grade="3";
		}
		else
		{
			grade="fail";
		}
	}
	void display()
	{
		cout<<"name  is "<<name<<"\ngrade is "<<grade<<"\nsubject1 marks is "<<marks1<<"\nsubject2 marks is "<<marks2<<"\nsubject3 marks is "<<marks3<<endl;
	}
	
};
int main()
{
	CollegeCourse c1;
	int m1,m2,m3;
	cout<<"enter the marks of first subject\n";
	cin>>m1;
	cout<<"enter the marks of second subject\n";
	cin>>m2;
	cout<<"enter the marks od third suject\n";
	cin>>m3;
	c1.set_data("dheeraj","NA",m1,m2,m3);
	cout<<"the avg of students marks is "<<c1.calculate_avg()<<endl;
	c1.compute_grade();
	c1.display();
	return 0;
}

