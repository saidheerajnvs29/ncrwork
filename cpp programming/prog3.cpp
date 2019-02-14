#include<iostream>
using namespace std;
class complex
{
    public:
    int real,img;
    public:
    complex()
    {
        real=0;img=0;
    }
    complex(int val)
    {
        real=img=val;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;      
    }
    void display()
    {
        cout<<"the real value is :"<<real<<endl;
        cout<<"the imaginary value is :"<<img<<endl;
    }
    friend complex add(complex &,complex &);
    friend complex multiply(complex &,complex &);
    
};
complex add(complex &c1,complex &c2)
{
    complex c;
    c.real=c1.real+c2.real;
    c.img=c1.img+c2.img;
    return c;
}
complex multiply(complex &c1,complex &c2)
{
    complex c;
    c.real=c1.real*c2.real;
    c.img=c1.img*c2.img;
    return c;
}
int main()
{
    complex c1,c2(3),c3(4,5),c4,c5;
    c4=add(c2,c3);
    c5=multiply(c2,c3);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();     
    return 0;
}


