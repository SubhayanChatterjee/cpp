#include<iostream>
using namespace std;
void pass(string c[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<c[i];
	}
}
int main()
{
	string c[4];
	for(int i=0;i<4;i++)
	{
		cin>>c[i];
	}
	pass(c,4);
	return 0;
}
