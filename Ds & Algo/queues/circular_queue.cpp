#include<iostream>
using namespace std;
class queue
{
	int *arr;
	int size;
	int front,rear;
	public:
	queue()
	{
		arr=NULL;
		size=0;
		front=-1;
		rear=-1;
	}
	bool isEmpty()
	{
		return (rear==-1 && front==-1);
	}
	bool isFull()
	{
		return ((rear+1)%size==front);
	}
	void enque(int n)
	{
		if(isFull())
		{
			cout<<"overflow\n";
		}
		else
		{
		
			rear=(rear+1)%size;	
			if(front==-1)
			{
				front=0;
			}
			arr[rear]=n;
		}
	}
	int deque()
	{
		int x=-1;
		if(!isEmpty())
		{
			x=arr[front];
			front=(front+1)%size;
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}	 	 
		}	 
		else
		{
			cout<<"underflow\n";
		}
		return x;
	}
	void display()
	{
		int i;
		for(i=front;i!=rear;i=(i+1)%size)
		{
			cout<<arr[i]<<" ";
		}
		cout<<arr[i]<<endl;
	}
	void getSize(int n)
	{
		size=n;
		arr=new int[size];
	}
};
int main()
{
	queue q;
	int n;
	cout<<"enter the size of queue\n";
	cin>>n;
	q.getSize(n);
	while(1)
	{
		cout<<"enter\n1 for enque\n2 for deque\n\n3 for exit\n";
		int f;
		cin>>f;
		switch(f)
		{
			case 1:
				cout<<"enter the value\n";
				int val;
				cin>>val;
				q.enque(val);
				q.display();
				break;
			case 2:
				cout<<"the dequeued value is "<<q.deque()<<endl;
				break;
			case 3:
				cout<<"exiting.......................................................................................\n";
				exit(0);
			defualt:
				cout<<"enter the correct value\n";
				break;
				
		}
	}
	
	return 0;
}

