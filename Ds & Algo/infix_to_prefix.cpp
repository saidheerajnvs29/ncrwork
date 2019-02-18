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
    T pop()
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
    T peek()
    {
        T x=(T)-1;
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
int prec(char ch)
{
	if(ch=='*' ||ch=='/')
	{
		return 3;
	}
	else if(ch=='+' || ch=='-')
	{
		return 2;
	}
	return 1;
}
int main()
{
    stk<char> s;
	cout<<"enter the size of stack\n";
	int n;
	cin>>n;
	s.getsize(n);
	string str,res;
	char ch;
	cout<<"enter the string to convert to postfix\n";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			res+=str[i];
		
		}
		else
		{
			ch=str[i];
			if(ch==')')
			{
				s.push(ch);
			}
			else if(ch=='(')
			{
				while(s.peek()!=')')
				{
					res+=s.pop();
				}
				s.pop();
			}
			else
			{
				while(!s.isEmpty())
				{
					s.display();
				//	  cout<<res<<endl;
					if(prec(ch)<prec(s.peek()))
					{
						res+=s.pop();
					}
					else break;
				}
				s.push(ch);
			}
		}
	}
	while(!s.isEmpty())
	{
		res+=s.pop();
	}
	for(int i=res.length()-1;i>=0;i--)
	{
		cout<<res[i];
	}
	cout<<endl;
    return 0;
}

