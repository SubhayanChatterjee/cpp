#include<iostream>
using namespace std;
/*int give(int n)
{
	int m=1;
	while(n!=0)
	{
		m=m*10;
		n=n/10;
	}
	return m/10;
	
}*/
template<typename t>
void check(t x,t y)
{
	if(x==y)
	{
		cout<<y;
		cout<<" is a palindrome"<<endl;
	}
	else
	{
		cout<<y;
		cout<<"is not a palindrome"<<endl;
	}
}
int main()
{
	string st1,st2;
	int x;
	int y=0,d,m,v;
	int choice;
	cout<<"enter the choice 2 for string and 1 for number "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"enter the value of x"<<endl;
			cin>>x;
			v=x;
			while(x!=0)
			{
			  d=x%10;
			y=y*10+d;
			  x=x/10;	
			}
			check(v,y);
			break;
		case 2:
			cout<<"enter the value of st1"<<endl;
			cin>>st1;
		    for(int i=st1.length()-1;i>=0;i--)
			{
				st2=st2+st1[i];
				}
			//	cout<<st1;	
			check(st1,st2);
			break;
			default:
				cout<<"END"<<endl;
	}
	return 0;
	
}
