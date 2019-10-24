#include<iostream>
using namespace std;
int main()
{
	int size,arr[10],i,temp,j;
	cout<<"Enter size";
	cin>>size;
	for(i=0;i<size;i++)
	{cin>>arr[i];}
	cout<<"Sorting :\n";
	for(j=0;j<size-1;j++){     
	for(i=0;i<size-j-1;i++)    //Heaviest Element will be transferred at the end.
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}
}
	for(i=0;i<size;i++)
	{
	cout<<arr[i];
    } 
    return 0;
}
