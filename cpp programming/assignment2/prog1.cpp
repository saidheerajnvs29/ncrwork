#include<iostream>
using namespace std;
class point
{
	int angle;
	int radius;
	public:
	static int count;
	point()
	{
		count++;
	}
	point(int a,int r)
	{
		angle=a;
		radius=r;
		count++;
	}
	~point()
	{
		count--;
	}
	friend void func(int,int);
};
int point::count;
void func(int a,int r)
{
	point p;
	cout<<point::count<<endl;
	p.angle=a;
	p.radius=r;
	//point::count++;
}
int main()
{
	point p1;
	cout<<point::count<<endl;
	point p2(3,7);
	cout<<point::count<<endl;
	func(4,5);
	cout<<point::count<<endl;
	return 0;
}

