#include<iostream>
using namespace std;
int main()
{ 
int arr[5];
cout<<"enter the value of integers:"<<endl;
for(int i=0;i<5;i++)
{
	cin>>arr[i];
}
int t;
t=arr[0];
for(int i=0;i<5;i++)
{
	if(t>arr[i])
	{
	t=arr[i];	
	}
}
cout<<"the value of smallest element"<<endl;
cout<<t<<endl;
cout<<"the value of second smallest element"<<endl;
int p=arr[0];
int z;
for(int i=0;i<5;i++)
{
	if(arr[i]==t)
	{
		z=i;
	}
}
for(int i=0;i<5;i++)
{
	if(p>arr[i]&&i!=z)
	{
		p=arr[i];
		
	}
}
cout<<p<<endl;
return 0;
}
