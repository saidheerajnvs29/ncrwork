#include<iostream>
using namespace std;
void bubble_sort(int *a, int n) 
{ 
	int i, j; 
    for (i = 0; i < n-1; i++)       
    {
    	for (j = 0; j < n-i-1; j++)
		{  
            if (a[j] > a[j+1])
		    { 
            	int temp=a[j];
			    a[j]=a[j+1];
			    a[j+1]=temp;
			}
		}
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
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}

