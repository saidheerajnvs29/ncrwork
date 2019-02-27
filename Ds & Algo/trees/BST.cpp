#include<iostream>
using namespace std;
typedef struct jode
{
	int data;
	struct jode *left,*right;	 
}Node; 
int findmax(Node *no);
int findmin(Node *);
class Tree
{
	public:
	Node *root;
	Tree()
	{
		cout<<"in construtor"<<endl;
		root=NULL;
	}
	int height(Node *node)
	{
		if(node==NULL)
		{
			return -1;
		}
		return 1+max(height(node->left),height(node->right));
	}
	void insert(int ele)
	{	
		Node *temp=new Node;
		temp->data=ele;
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL)
		{
			root=temp;
			return;	   	   
		}
		Node *curr=root,*prev=root;
		while(curr!=NULL)
		{
			prev=curr;
			if(curr->data>ele)
			{
				curr=curr->left;
			}
			else if(curr->data<ele)
			{
				curr=curr->right;
			}
		}
		
		if(prev->data<ele)
		{
			prev->right=temp;	 	 
		}
		else
		{
			prev->left=temp;
		}	 	 	 
	}
	Node *deletenode(Node *node,int ele)
	{	
		Node *curr=node,*prev;
		if(curr->data==ele)
		{
			if(curr->left==NULL && curr->right==NULL)
			{
				return NULL;
				delete curr;
			}
			else if(curr->left==NULL)
			{
				int min=findmin(curr->right);
				curr->data=min;
				curr->right=deletenode(curr->right,min);
			}
			else
			{
				int max=findmax(curr->left);
				curr->data=max;
				curr->left=deletenode(curr->left,max);					
			}
		}	 	 
		else if(curr->data<ele)
		{
			curr->right=deletenode(curr->right,ele);	
		}
		else
		{
			curr->left=deletenode(curr->left,ele);
		}
		return node;
	}
	void inorder(Node *node)
	{
		if(node!=NULL)
		{
			inorder(node->left);
			cout<<node->data<<" ";
			inorder(node->right);
		}
	}
	void preorder(Node *node)
	{
		if(node!=NULL)
		{
			
			cout<<node->data<<" ";
			preorder(node->left);
			preorder(node->right);
		}
	}
	void postorder(Node *node)
	{
		if(node!=NULL)
		{
			postorder(node->left);
			postorder(node->right);
			cout<<node->data<<" ";
		}
	}
	friend int findmax(Node *no);
	friend int findmin(Node *);
};
int findmax(Node *no)
{
	while(no->right!=NULL)
	{
		no=no->right;
	}
	return no->data;
	
}
int findmin(Node *no)
{
	while(no->left!=NULL)
	{
		no=no->left;
	}
	return no->data;
}
int main()
{
	Tree t;
	t.insert(7);
	t.insert(4);
	t.insert(10);
	t.insert(3);
	t.insert(5);
	t.insert(9);
	t.insert(11);
	t.insert(1);
	cout<<t.height(t.root)<<endl;
	t.inorder(t.root);
	cout<<"\n";
	t.postorder(t.root);
	t.root=t.deletenode(t.root,10);
	cout<<"\n";
	t.postorder(t.root);
	return 0;
}

