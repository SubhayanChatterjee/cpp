#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
	
		cin>>arr[i];
	}
	/*	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;*/
	
int k;
int temp;
cout<<"enter the value of k"<<endl;
cin>>k;
int m=k;
for(int i=0;i<k/2;i++)
{
int temp=arr[i];
arr[i]=arr[k-i-1];
arr[k-1-i]=temp;
}
cout<<m/2<<endl;
 temp=0;
int c=0;
for(int i=0;i<(10-k)/4;i++)
{
	temp=arr[m];
	arr[m]=arr[5-1-c];
	arr[5-1-c]=temp;
	c++;
	m++;
}
for(int i=0;i<5;i++)
{
	cout<<arr[i];
}
return 0;


}
