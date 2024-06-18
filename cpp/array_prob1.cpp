#include<iostream>
using namespace std;
void pass(int arr[],int n)
{
	int c=0;
	int temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1||arr[i]==2)
		c++;
	}
//	cout<<c<<end
    int d;
    int e=2;
	for(int j=0;j<c;j++)
		{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1||arr[i]==2)
		{
		//	int t=arr[i];
			temp=arr[i];
			arr[i]=arr[n-1-j];
			arr[n-1-j]=temp;
		//	break;
	
		}
	}
}
}
int main()
{
	int arr[8];
	cout<<"enter the value of array :"<<endl;
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	pass(arr,8);
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
