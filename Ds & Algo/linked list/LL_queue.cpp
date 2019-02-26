#include<iostream>
using namespace std;
class queue;
typedef struct jode 
{
	int data;
	struct jode *next;
}Node;
void print(Node *);
class LL
{
	
	public:
	Node *start;
	LL()
	{
		start=NULL;
	}
	void insert_begin(int n)
	{
		Node *curr,*temp;
		temp=new Node;
		temp->data=n;
		if(start!=NULL)
		{
			temp->next=start;
		}
		else temp->next=NULL;
		start=temp;
	}
	void insert_last(int n)
	{
		Node *curr,*temp;
		temp=new Node;
		temp->data=n;
		temp->next=NULL;
		if(start!=NULL)
		{
			curr=start;	   
			while(curr->next!=NULL)
			{
				curr=curr->next;	
			}
			curr->next=temp;
		}
		else
		{
			start=temp;	   
		}
		
	}	  
	int delete_begin()
	{
		int x=-1;
		Node *curr=start,*temp;
		if(curr!=NULL)
		{
			temp=start;
			x=temp->data;
			start=start->next;
			delete temp;	
		}
		return x;
	}
	int delete_last()
	{
		int x=-1;
		Node *curr=start,*temp;
		if(curr!=NULL)
		{
			if(curr->next==NULL)
			{
				x=curr->data;
				start=NULL;
				delete curr;
				return x;
			}
			while(curr->next->next!=NULL)
			{
				curr=curr->next;	
			}	 
			temp=curr->next;
			x=temp->data;
			curr->next=NULL;
			delete temp;
		}
		return x;
	}
	void traverse()
	{
		Node *curr;
	/*	  curr=start;*/
		for(curr=start;curr!=NULL;curr=curr->next)
		{
			cout<<curr->data<<" ";
		}
		cout<<endl;
	}
/*	  ~LL()
	{
		Node *temp,*curr=start;
		while(start!=NULL)
		{
			temp=start;
			start=start->next;
			delete temp;
		}
	}*/
	friend class queue;	   
};
class queue
{
	LL list;
	public:
	/*stack()
	{
		list=NULL;
	}*/
	void enque(int n)
	{
		list.insert_last(n);
	}
	int deque()
	{
		return list.delete_begin();
	}
	void display()
	{
		list.traverse();
	}
};
int main()
{
	queue q;
	while(1)
	{
		cout<<"enter\n1 for enque\n2 for deque\n3 for exit\n";
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"enter the element\n";
				int val;
				cin>>val;
				q.enque(val);
				q.display();
				cout<<"\n\n";
				break;
			case 2:
				cout<<"the removed element is "<<q.deque()<<endl;
				q.display();
				cout<<"\n\n";
				break;
			case 3:
				cout<<"exiting............................................................................................................\n";
				exit(0);
			default:
				cout<<"enter the correct value\n";
				break;
		}
	}
	return 0;
}

