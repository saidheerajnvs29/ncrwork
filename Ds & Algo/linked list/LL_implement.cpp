#include<iostream>
using namespace std;
typedef struct jode 
{
	int data;
	struct jode *next;
}Node;
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
	void traverse_forward()
	{
		Node *curr;
	/*	  curr=start;*/
		for(curr=start;curr!=NULL;curr=curr->next)
		{
			cout<<curr->data<<" ";
		}
		cout<<endl;
	}
	
};
int main()
{
	LL node;
	int x=node.delete_begin();
	if(x<0)
	{
		cout<<"element not found\n";
	}
	else
	{
		cout<<x<<" deleted\n";
	}
	node.insert_last(4);
	node.traverse();
	node.insert_last(6);
	node.traverse();
	node.insert_begin(7);	 
	node.traverse();
	node.insert_after(7,8);
	node.traverse();
	node.insert_before(7,13);
	node.traverse();
	node.insert_last(9);
	node.traverse();
	x=node.delete_last();
	if(x<0)
	{
		cout<<"element not found\n";
	}
	else
	{
		cout<<x<<" deleted\n";
	}
	
	node.traverse();
	node.insert_begin(10);
	node.traverse();
	node.delete_spec(8);
	node.traverse();
	return 0;
}

