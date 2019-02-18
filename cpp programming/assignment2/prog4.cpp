#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex()
    {
        real=img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    complex(complex &c)
    {
        real=c.real;
        img=c.img;
    }
    ~complex()
    {
        
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }    
    complex operator-(complex c)
    {
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }      
    complex operator-()
    {
        complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
    complex operator++()
    {
        complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }            
    complex operator++(int i)
    {
        complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
    complex operator,(complex c)
    {
        return (c);
    }            
    complex* operator->()
    {
        return (this);
    }
    void display()
    {
        cout<<real<<" "<<img<<" hello"<<endl;
    }
    friend ostream& operator<<(ostream &cout,complex c);
    friend istream& operator>>(istream &cin,complex &c);
};
ostream& operator<<(ostream &cout,complex c)
{
    cout<<"real:"<<c.real<<"    imaginary :"<<c.img<<endl; 
    return (cout);
}
istream& operator>>(istream &cin,complex &c)
{
    cin>>c.real>>c.img; 
    return (cin);
}
int main()
{
    complex c1,c2(2,3),c3(4,5);
    cout<<c1<<c2<<c3;
    complex c5,c6,c7,c8,c9,c10;
    complex c11;
    c11=&c2;
    c5=c2+c3;
    cout<<c5;
    c6=c3-c2;
    cout<<c6;
    c7=-c2;
    cout<<c7;
    c8=c2++;
    cout<<c8;
    c9=++c3;
    cout<<c9;
    c10=(c2,c3,c5);
    cout<<c10;
    c11->display();
    return 0;
}

