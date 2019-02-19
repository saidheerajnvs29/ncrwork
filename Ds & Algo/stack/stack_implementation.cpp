#include<iostream>
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
    
};
int main()
{
    stk<int> s1;
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    s1.getsize(n);
    while(1)
    {
        int f,val;
        cout<<"enter\n1 for push\n2 for pop\n3 for peek\n4 for exit\n";
        cin>>f;
        switch(f)
        {
            case 1:
                cout<<"enter the element to push\n";
                cin>>val;
                s1.push(val);
				s1.display();
                break;
            case 2:
                val=s1.pop();
                cout<<val<<" is popped"<<endl;
				s1.display();
                break;
            case 3:
                val=s1.peek();
                cout<<val<<" is the top element"<<endl;
				s1.display();
      			break;
            case 4:
                cout<<"exiting ..........................................................\n";
                exit(0);
            default:
                cout<<"enter the valid number\n";
                break;
        }
    }
    return 0;
}

