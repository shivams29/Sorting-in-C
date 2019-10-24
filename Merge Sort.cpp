#include<iostream>
using namespace std;
void merge(int *arr,int f,int m,int l);
void mergesort(int *arr,int first,int last)
{
	int mid;
	if(first<last)
	{
		mid = (first + last )/ 2;
		mergesort(arr,first,mid);
		mergesort(arr,mid+1,last);
		merge(arr,first,mid,last);
	}
}
void merge(int *arr,int f,int m,int l)
{
	int temp[l-f+1],i,j,k;
	i=f;
	j=m+1;
	k=0;
	while(i<=m && j<=l)
	{
		if(arr[i]<arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=l)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(k=f;k<=l;k++)
	{
		arr[k]=temp[k-f];
	}
}
int main()
{
	int n,i,a[10];
	cout<<"Enter the size of array: \n";
	cin>>n;
	cout<<"Enter elements: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	cout<<"The sorted Array is :\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	
