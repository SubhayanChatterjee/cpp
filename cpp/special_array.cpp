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
int k;
int r;
cout<<"finding the even postion"<<endl;
k=0;
for(int i=0;i<5;i++)
{
if(i%2==0)
{
	k++;
	}	
}
cout<<k<<endl;
r=k*2;
while(r>=0)
{
for(int i=0;i<5;i++)
{
	if(i==r)
	{
		for(int j=r;j<5;j++)
		{
			arr[j]=arr[j+1];
		}
	}
}
r=r-2;
}
cout<<"the modified array is"<<endl;
for(int i=0;i<5-k;i++)
{
	cout<<arr[i];
}
return 0;
}
