#include<iostream>
using namespace std;
int main()
{
	int arr[10]={44,88,77,22,66,11,99,55,00,33};
	int temp,p=0,n;
	
	for(int i=0;i<10;i++)
	{
		for(int j=i;j>=0;j--)
		{
		
		if(arr[j-1]>arr[j])
		{
		temp=arr[j-1];
		arr[j-1]=arr[j];
		arr[j]=temp;
		//i=p;	
		}
	}
	}
	n--;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
