#include<iostream>
using namespace std;
int main()
{
	int arr[10]={6,2,19,21,5,4,1};
	int temp,n=7;
	while(n!=0)
	{
	for(int i=0;i<6;i++)
	{
		if(arr[i]>arr[i+1])
		{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;	
		}
	}
	n--;
}
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
