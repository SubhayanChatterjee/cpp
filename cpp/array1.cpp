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
cout<<"enter the position which you want to delete from array"<<endl;
cin>>k;
for(int i=0;i<5;i++)
{
	if(i==k)
	{
		for(int j=k;j<5;j++)
		{
			arr[j]=arr[j+1];
		}
	}
}
cout<<"the modified array is"<<endl;
for(int i=0;i<4;i++)
{
	cout<<arr[i];
}
return 0;
}
