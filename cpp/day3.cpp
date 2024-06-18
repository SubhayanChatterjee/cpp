#include<iostream>
using namespace std;
void pass(char *c,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<c[i];
	}
}
void pass1(char *r)
{
	cout<<r<<endl;;
}
int main()
{
	char c[4];
	for(int i=0;i<4;i++)
	{
		cin>>c[i];
	}
		pass1("rejkvkjhd kjfgdsfvug");
	pass(c,4);
	return 0;
}
