#include<iostream>
using namespace std;
class Time
{
	int hrs,min,sec;
	public:
	Time()
	{
		hrs=0;
		min=0;
		sec=0;
	}
	Time(int h,int m,int s)
	{
		hrs=h;
		min=m;
		sec=s;
	}
	void display_format()
	{
		cout<<"the time is "<<hrs<<":"<<min<<":"<<sec<<endl;
	}
	void add_time(Time &t1,Time &t2)
	{
		hrs=(t1.hrs+t2.hrs)%24;
		min=(t1.min+t2.min)%60;
		sec=(t1.sec+t2.sec)%60;
	}
};
int main()
{
	Time t1;
	t1.display_format();
	Time t2(11,34,43),t3(10,28,24);
	t2.display_format();
	Time t4;
	t4.add_time(t2,t3);
	t4.display_format();
	return 0;
}

