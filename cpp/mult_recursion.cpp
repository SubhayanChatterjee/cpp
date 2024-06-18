#include<iostream>
using namespace std;
int mult(int a[],int n)
{
	if(n<0)
	{
		return 1;
	}
	else
	{
		return a[n]*mult(a,n-1);
	}
}
int main()
{
	int arr[5]={10,1,2,3,4};
	int m;
	m=mult(arr,4);
	cout<<m;
	return 0;	
}
