#include<iostream>
using namespace std;
void linear_search(int arr[],int n,int k)
{
	cout<<"elements are : ";
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
		cout<<i<<" ";	
		}
	}
}
int main()
{
	int n;
	cout<<"enter the value of n "<<endl;
	cin>>n;
	int arr[n];
	int k;
	cout<<"value of k"<<endl;
	cin>>k;
	for(int i;i<n;i++)
	{
		cin>>arr[i];
	}
linear_search(arr,n,k);
return 0;
}
