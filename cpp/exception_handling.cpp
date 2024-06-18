#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a,band c"<<endl;
	cin>>a>>b>>c;
	int m;
	m=b*b-4*a*c;
	try
	{
		if(a==0)
		{
			throw "it is not a quadratic";
		}
		else if(m<0)
		{
			throw m;
			throw"roots are imaginary";
			
		}
		else
		{
				throw m;
			throw"roots are real";
		
		}
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	catch(int t)
	{
		cout<<t<<endl;
	}
	return 0;
}
