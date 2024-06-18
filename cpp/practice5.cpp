#include<iostream>
using namespace std;
int main()
{
	int arr[10]={6,2,19,21,5,4,1};
	int min,t,pivot;
	//min=arr[0];
	for(int i=0;i<7;i++)
	{
		//min=arr[i];
		//pivot=i;
		for(int j=0;j<6;j++)
		{
			if(arr[j+1]<arr[j])
			{
				t=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=t;
			}
			//break;
		}
		//cout<<"5"<<endl;
	}
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
