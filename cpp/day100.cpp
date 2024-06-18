#include<iostream>
using namespace std;
string pass(string str,string st)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			st+=str[i+1];
			i++;
		}
		else
		{
			st+=str[i];
		}
	}
	return st;
}
int main()
{
	string str="hello world";
	string st;
	//cout<<"enter the value of string"<<Endl;
	//cin>>str;
	st=pass(str,st);
	cout<<st<<endl;
	return 0;	
}
