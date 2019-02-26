#include<iostream>
using namespace std;
typedef struct jode 
{
	int data;
	struct jode *next;
}Node;
void print(Node *);
class LL
{
	Node *start;
	public:
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
	void insert_after(int sele,int ele)
	{
		Node *curr=start,*temp;
		if(curr!=NULL)
		{
			while(curr!=NULL && curr->data!=sele)
			{
				curr=curr->next;
			}
			if(curr!=NULL)
			{
				temp=new Node;
				temp->data=ele;
				temp->next=curr->next;
				curr->next=temp;	
			}
			else
			{
				cout<<sele<<" not found\n";
			}
		}
		else
		{
			cout<<"no list\n";
		}
	}
	void insert_before(int sele,int ele)
	{
		Node *curr=start,*temp;
		if(curr!=NULL)
		{
			if(curr->data==sele)
			{
				temp=new Node;
				temp->data=ele;
				temp->next=start;
				start=temp;
				return;
			}	 
			while(curr->next!=NULL && curr->next->data!=sele)
			{
				curr=curr->next;
			}	 
			if(curr->next!=NULL)
			{
				temp=new Node;
				temp->data=ele;
				temp->next=curr->next;
				curr->next=temp;
						
			}
			else
			{
				cout<<sele<<" not found\n";
			}
		}
		else
		{
			cout<<"no list\n";
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
	void delete_spec(int ele)
	{
		Node *curr=start,*temp;
		if(curr!=NULL)
		{
			if(curr->data==ele)
			{
				temp=curr;
				start=NULL;
				delete temp;
				return;
			}
			while(curr->next!=NULL && curr->next->data!=ele)
			{
				curr=curr->next;
			}
			if(curr->next!=NULL)
			{
				temp=curr->next;
				curr->next=temp->next;
				delete temp;
			}
			else
			{
				cout<<ele<<" no found\n";
			}
		}
		else
		{
			cout<<"no list\n";
		}
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
	void traverse_back()
	{
		print(start);
		cout<<endl;
	}
	void reverse()
	{
		Node *rev=NULL;
		Node *temp,*curr=start;
		while(curr!=NULL)
		{
			temp=curr;
			curr=curr->next;
			if(rev!=NULL)
			{
				temp->next=rev;
				rev=temp;
			}
			else
			{
				temp->next=NULL;
				rev=temp;
			}	 
		}
		start=rev;
	}
	void selfAdjust(int ele)
	{
		Node *curr=start;
		if(curr==NULL)
		{
			cout<<"element not found\n";
			return;
		}
		int flag=0;
		for(curr=start;curr->next!=NULL;curr=curr->next)
		{
			if(curr->next!=NULL && curr->next->data==ele)
			{
				Node *temp=curr->next;
				curr->next=curr->next->next;
				temp->next=start;
				start=temp;	   	   	   	   
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"element not found\n";
		}
	}
	~LL()
	{
		Node *temp,*curr=start;
		while(start!=NULL)
		{
			temp=start;
			start=start->next;
			delete temp;
		}
	}
	
};
void print(Node *start)
{
	if(start==NULL)
		return;
	print(start->next);
	cout<<start->data<<" ";
}
int main()
{
	LL node;
	node.insert_last(1);
	node.insert_last(2);
	node.insert_last(3);
	node.insert_last(4);
	node.insert_last(5);
	node.insert_last(6);
	node.insert_last(7);
	node.insert_last(8);
	node.insert_last(9);
	node.insert_last(10);
	while(1)
	{
		int n;
		cout<<"enter the element to search\n";
		cin>>n;
		node.selfAdjust(n);
		node.traverse();
	}

	return 0;
}

