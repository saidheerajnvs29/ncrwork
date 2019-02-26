#include<iostream>
using namespace std;
void heapify(int *a,int i,int n)
{
	int temp=a[i];
	int c;
	for(;2*i+1<n;i=c)
	{
		c=2*i+1;
		if(c+1<n && a[c+1]>a[c])
		{
			c++;
		}
		if(a[c]>temp)
		{
			a[i]=a[c];
		}
		else
		{
			break;
		}
	}
	a[i]=temp;
}
void heap_sort(int *a,int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,i,n);
	}
	for(int i=0;i<n-1;i++)
	{
		int temp=a[0];
		a[0]=a[n-i-1];
		a[n-i-1]=temp;
		heapify(a,0,n-i-1);	   
	}
}
int main()
{
	int a[100];
	cout<<"enter the array size\n";
	int n;
	cin>>n;
	cout<<"enter the "<<n<<" elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	heap_sort(a,n);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

