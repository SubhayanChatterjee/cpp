#include<iostream>
using namespace std;
void merge(int a[],int mid,int low,int high)
{
	int b[100];
	int k=low;
	int i=low;
	int h=0;
	int j=mid+1;
	while(i<=mid && j<=high)
	{
			if(a[i]>a[j])
			{
				b[k]=a[j];
			//	k++;
				j++;
			}
			else
			{
				b[k]=a[i];
				//k++;
				i++;
			
			}
			k++;	
		
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
		while(j<=high)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
}
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
	
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,mid,low,high);
	}
	
}
int main()
{
	int arr[8]={1,2,5,4,6,7,8,9};
	mergesort(arr,0,7);
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
