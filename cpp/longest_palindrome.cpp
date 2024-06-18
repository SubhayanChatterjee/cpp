#include<iostream>
using namespace std;
void check(string st1)
{
	int n;
	string st2;
//	string cal[100];
	for(int i=st1.length()-1;i>=0;i--)
	{
		st2=st2+st1[i];
	}
	if(st2==st1)
	{
	n=st2.length();	
	cout<<st1<<endl;
	}
	}
void palindrome(string str)
{
int beg=0;
int end;
end=str.length();
string st1;
for(int i=0;i<end;i++)
{
	for(int j=i;j<end-i;j++)
	{
	st1=st1+str[j];
			check(st1);
	}
st1="";
}	
}

int main()
{
string str,str1;
cout<<"enter the string"<<endl;
cin>>str;
palindrome(str);
return 0;
}
