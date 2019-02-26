#include<iostream>
using namespace std;
void merge(int *a,int low,int mid,int high)
{
	int b[100];
	int i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]>a[j])
		{
			b[k++]=a[j++];
		}
		else
		{
			b[k++]=a[i++];
		}
	}
	while(i<=mid)
	{
		b[k++]=a[i++];
	}
	while(j<=high)
	{
		b[k++]=a[j++];
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
}

void merge_sort(int *a,int low,int high)
{
	if(low<high)
	{
		int mid=low+high;
		mid/=2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
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
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

