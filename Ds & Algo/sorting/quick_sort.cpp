#include<iostream>
using namespace std;
int partition(int *a,int low,int high)
{
	int pivot=a[high];
	int i=low;
	int j=low;
	while(j<high)
	{
		if(a[j]<pivot)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
		}
		j++;
	}
	a[high]=a[i];
	a[i]=pivot;
	return i;
}
void quick_sort(int *a,int low,int high)
{
	if(low<high)
	{
		int p=partition(a,low,high);
		quick_sort(a,low,p-1);
		quick_sort(a,p+1,high);
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
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

