#include<iostream>
using namespace std;
int main()
{ 
int arr[6];
cout<<"enter the value of integers:"<<endl;
for(int i=0;i<5;i++)
{
	cin>>arr[i];
}
int k;
int x;
cout<<"enter the position and the value of element which you want to add element in array"<<endl;
cin>>k>>x;
int c=0;
for(int i=0;i<5;i++)
{
	if(i==k)
	{
		for(int j=5;j>k;j--)
		{
			arr[5-c]=arr[j-1];
			c++;
		}
		arr[k]=x;
	}
}
cout<<"the modified array is"<<endl;
for(int i=0;i<6;i++)
{
	cout<<arr[i];
}
return 0;
}
