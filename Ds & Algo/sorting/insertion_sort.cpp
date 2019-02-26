#include<iostream>
using namespace std;
void insertion_sort(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp=a[i];
		while(j>=0)
		{
			if(a[j]<temp)
			{
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
			j--;
		}
		a[j+1]=temp;
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
	insertion_sort(a,n);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

