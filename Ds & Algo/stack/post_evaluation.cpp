#include<iostream>
#include<cstring>
using namespace std;
template <class T>
class stk
{
    T *arr;
    int size;
    int top;
    public:
    stk()
    {
        arr=NULL;
        size=0;
        top=-1;
    }
    void getsize(int n)
    {
        arr=new T[n];
        size=n;
    }
    bool isEmpty()
    {
        return (top==-1);
    }
    bool isFull()
    {
        return top==size-1;
    }
    void push(T n)
    {
        if(!isFull())
        {
            arr[++top]=n;
        }
        else
        {
            cout<<"stack overflow\n";
        }
    }
    int pop()
    {
        T x=(T)-1;
        if(!isEmpty())
        {
            x=arr[top--];
            return x;
        }
        cout<<"stack underflow\n";
        return x;   
    }
    int peek()
    {
        int x=(T)-1;
        if(!isEmpty())
        {
            x=arr[top];
            return x;
        }
        cout<<"stack underflow\n";
        return x;   
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main()
{
    stk<int> s;
	cout<<"enter the size of stack\n";
	int n;
	cin>>n;
	s.getsize(n);
	string str;
	cout<<"enter the string to evaluate\n";
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			int val=str[i]-48;
			i++;
			while(str[i]!='@')
			{
				val*=10;
				int temp=str[i]-48;
				val+=temp;
				i++;
			}
			s.push(val);
		}
		else
		{
			int b=s.pop();
			int a=s.pop();
			if(str[i]=='+')
			{
				s.push(a+b);
			}
			else if(str[i]=='-')
			{
				s.push(a-b);
			}
			else if(str[i]=='*')
			{
				s.push(a*b);
			}
			else if(str[i]=='/')
			{
				s.push(a/b);
			}	 	 
		}
	}
	cout<<s.peek()<<endl;
    return 0;
}

