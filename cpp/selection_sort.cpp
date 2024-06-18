#include<iostream>
using namespace std;
int main()
{
	int arr[10]={6,2,19,21,5,4,1};
	int min,t,pivot;
	//min=arr[0];
	for(int i=0;i<7;i++)
	{
		min=arr[i];
		pivot=i;
		for(int j=i;j<7;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pivot=j;
			}
		}
		t=arr[i];
		arr[i]=arr[pivot];
		arr[pivot]=t;
	}
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
