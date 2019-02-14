#include<iostream>
#include<math.h>
using namespace std;
class point
{
	int x,y;
	public:
	point()
	{
		x=y=0;
	}
	point(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<"x ; "<<x<<endl;
		cout<<"y : "<<y<<endl;
	}
	friend float distance(point &,point &);
};
float distance(point &p1,point &p2)
{
	float res=0;
	res+=(p2.x-p1.x)*(p2.x-p1.x);
	res+=(p2.y-p1.y)*(p2.y-p1.y);
	res=sqrt(res);
	return res;
}
int main()
{
	point p1(3,5),p2(5,7);
	cout<<"the distance between points is :"<<distance(p1,p2)<<endl;
	
	return 0;
}


