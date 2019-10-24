//INSERTION SORT CODE
//second element se compare krna shuru krte hain 
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int i,j,temp,size;
	cout<<"\nEnter the size of array";
	cin>>size;
	cout<<"\nEnter Elements";
	for(i=0;i<size;i++) 
	{
		cin>>arr[i];
	}
	for(i=1;i<size;i++)  //second element se start hoga . 
	{
		for(j=0;j<i;j++) //sirf ith element tak compare karega first se. 
		{
			if (arr[i]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
