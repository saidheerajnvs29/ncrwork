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
            x=arr[top--];
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
	int balanced(string &s)
	{
		stk<char> a;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]=='(' || s[i]=='{'||s[i]=='[')
			{
				a.push(s[i]);
			}
			else if(s[i]==')')
			{
				if(a.isEmpty())
				{
					return -1;
				}
				if(a.peek()=='(')
				{
					char ch=a.pop();
				}
				else 
				{
					return -1;
				}
			}
			else if(s[i]=='}')
			{
				if(a.isEmpty())
				{
					return -1;
				}
				if(a.peek()=='{')
				{
					char ch=a.pop();
				}
				else 
				{
					return -1;
				}
			}
			else if(s[i]==']')
			{
				if(a.isEmpty())
				{
					return -1;
				}
				if(a.peek()=='[')
				{
					char ch=a.pop();
				}
				else 
				{
					return -1;
				}
			}
		}
		if(!a.isEmpty())
		{
			return -1;	  
		}
		return 1;
	}
    
};
int main()
{
    string s;
	cout<<"enter the string\n";
	cin>>s;
	stk<char> st;
	int val=st.balanced(s);
	if(val==1)
	{
		cout<<"balanced\n";
	}
	else
	{
		cout<<"not balanced\n";
	}
    return 0;
}

