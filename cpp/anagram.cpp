#include<iostream>
using namespace std;
bool check(string s1,string s2)
{
	int f=0;
	for(int i=0;i<s1.length();i++)
	{
		for(int j=0;j<s2.length();j++)
		{
			if(s1[i]==s2[j])
			{
				f++;
				break;
			}
		}
	}
	if(f==s1.length())
	{
		return true;
	}
	else
	{
		//cout<<"not anagram"<<endl;
		return false;
	}
}
int main()
{
	string s1,s2;
	bool p;
	cout<<"enter the value of two string"<<endl;
	cin>>s1>>s2;
p =check(s1,s2);
//if((check))
if(p==1)
{
	cout<<"true"<<endl;
}
if(p==0)
{
	cout<<"false"<<endl;
}
	return 0;
}
