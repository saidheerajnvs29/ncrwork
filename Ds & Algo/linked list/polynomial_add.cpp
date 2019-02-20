#include<iostream>
using namespace std;
typedef struct jode 
{
	int coef,pow;
	struct jode *next;
}Node;
void print(Node *);
class Poly
{
	Node *start;
	public:
	Poly()
	{
		start=NULL;
	}
	void insert_begin(int co,int po)
	{
		Node *curr,*temp;
		temp=new Node;
		temp->coef=co;
		temp->pow=po;
		if(start!=NULL)
		{
			temp->next=start;
		}
		else temp->next=NULL;
		start=temp;
	}	
	void insert_last(int co,int po)
	{
		Node *curr,*temp;
		temp=new Node;
		temp->coef=co;
		temp->pow=po;
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
	void traverse()
	{
		Node *curr;
		for(curr=start;curr->next!=NULL;curr=curr->next)
		{
			cout<<curr->coef<<"x^"<<curr->pow<<"+";
		}
		cout<<curr->coef<<"x^"<<curr->pow<<endl;
	}
	~Poly()
	{
		Node *temp,*curr=start;
		while(start!=NULL)
		{
			temp=start;
			start=start->next;
			delete temp;
		}
	}
	void add(Poly &n1,Poly &n2)
	{
		
		Node *curr1=n1.start,*curr2=n2.start;
		while(curr1!=NULL && curr2!=NULL)
		{	
			if(curr1->pow==curr2->pow)
			{
				int coe=curr1->coef+curr2->coef;
				this->insert_last(coe,curr1->pow);
				curr1=curr1->next;
				curr2=curr2->next;
			}
			else if(curr1->pow>curr2->pow)
			{
				this->insert_last(curr1->coef,curr1->pow);
				curr1=curr1->next;
			}
			else if(curr1->pow<curr2->pow)
			{
				this->insert_last(curr2->coef,curr2->pow);
				curr2=curr2->next;
			}
		}
		while(curr1!=NULL)
		{
			this->insert_last(curr1->coef,curr1->pow);
			curr1=curr1->next;
		}
		while(curr2!=NULL)
		{
			this->insert_last(curr2->coef,curr2->pow);
			curr2=curr2->next;
		}
	}
};
int main()
{
	Poly node1,node2,node3;
	cout<<"enter the first polynomial\n";
	cout<<"enter the number of values entered\n";
	int n;
	cin>>n;
	while(n--)
	{
		int coef,pow;
		cin>>coef>>pow;
		node1.insert_begin(coef,pow);
	}	 
	cout<<"enter the second polynomial\n";
	cout<<"enter the number of values entered\n";
	cin>>n;
	while(n--)
	{
		int coef,pow;
		cin>>coef>>pow;
		node2.insert_begin(coef,pow);
	}
	cout<<"the first polynomial is\n";
	node1.traverse();
	cout<<"the second polynomial is\n";
	node2.traverse();
	node3.add(node1,node2);
	cout<<"the final polynomial is \n";
	node3.traverse();
	
	return 0;
}

