#include<iostream>
using namespace std;
class stack;
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
	friend class stack;	   
};
class stack
{
	LL list;
	public:
	void push(int n)
	{
		list.insert_begin(n);
	}
	int pop()
	{
		return list.delete_begin();
	}
	int peek()
	{
		return list.start->data;
	}
	void display()
	{
		list.traverse();
	}
};
int main()
{
	stack s;
	s.push(3);
	s.push(7);
	s.push(9);
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	s.push(12);
	s.push(14);
	cout<<s.peek()<<endl;
	s.display();
	return 0;
}

