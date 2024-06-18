#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int(5);
	cout<<*ptr<<endl;
	int *ptrnext=new int;
	cout<<"enter the value "<<endl;
	cin>>*ptrnext;
	cout<<*ptrnext<<endl;
	int *ptr1=new int[5];
	int *ptr2=ptr1;
	for(int i=0;i<5;i++)
	{
		cin>>*ptr1;
		ptr1++;
	}
	for(int i=0;i<5;i++)
	{
		cout<<*ptr2<<endl;
		ptr2++;
	}
	delete ptr;
	delete []ptr1;
	delete []ptr2;
/*	string *st=new string;
	cout<<"enter the value of string"<<endl;
	cin>>*st;
	cout<<*st<<endl;*/
	char *c=new char[4];
	cout<<"enter the character"<<endl;
	cin>>*c;
	cout<<*c<<endl;
	return 0;
}

