#include<iostream>
using namespace std;
void selection_sort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int index=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[index]>a[j])
			{
				index=j;		
			}
		}
		int temp=a[index];
		a[index]=a[i];
		a[i]=temp;
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
	selection_sort(a,n);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

