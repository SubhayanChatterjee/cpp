#include<iostream>
using namespace std;
int main()
{
	int arr[5]={9,1,3,2,5};
	int min,pivot,temp;
	for(int i=0;i<5;i++)
	{
		min=arr[i];
		pivot=i;
		for(int j=i;j<5;j++)
		{
			if(min>arr[j])
			{
				pivot=j;
				min=arr[j];
			}
		}
		temp=arr[i];
			arr[i]=arr[pivot];
			arr[pivot]=temp;
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
