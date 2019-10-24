//SELECTION SORT
#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10];
	cout<<"Enter the number of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min;
	for(i=0;i<n-1;i++)
	{
		min=i;                     //Min index is given to first element 
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[min])    //If the next element is smaller than Min index element then they are swapped
			{
				int temp=arr[j];
				arr[j]=arr[min];
				arr[min]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
