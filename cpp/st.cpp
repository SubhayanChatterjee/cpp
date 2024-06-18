#include<iostream>
using namespace std;
int main()
{
	string st1,st2;
	cout<<"enter the string"<<endl;
	cin>>st1;
	   for(int i=st1.size()-1;i>=0;i--)
			{
				st2=st2+st1[i];
				}
				cout<<st2;
				return 0;	
}
