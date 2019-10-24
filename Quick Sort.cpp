#include<iostream>
using namespace std;
int partition(int *a,int f,int l)
{
	int pivot=a[f];
	int i=f;
	int j=l+1,temp;
	do{
		do{
			i=i+1;
		}while(a[i]<pivot);
		
		do{ 
			j=j-1;
		}while(a[j]>pivot);
		if(i<j)
		{
			int temp2;
			temp2=a[i];
			a[i]=a[j];
			a[j]=temp2;
		}
	}while(i<j);
	temp=a[f];
	a[f]=a[j];
	a[j]=temp;
	return j;
}

quicksort(int *a,int first,int last)
{
	int p;
	if(first<last)
	{
		p=partition(a,first,last);
		quicksort(a,first,p-1);
		quicksort(a,p+1,last);
	}
}
int main()
{
	int n,arr[10];
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	cout<<"Enter Elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"After Sorting:  ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


