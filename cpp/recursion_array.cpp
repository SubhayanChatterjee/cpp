#include <iostream>
using namespace std;
void print(int a[],int n)
{
    int temp,s;
    if(n<3)
    {
   // cout<<"end"<<endl;
   return ;
    }
    else
    {
     s=4-n;  
    temp=a[n];
    a[n]=a[s];
    a[s]=temp;
    n--;
    print(a,n);
    }
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
   print(arr,4);
   for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
