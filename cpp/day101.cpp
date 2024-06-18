#include<iostream>
using namespace std;
int main()
{
	int x=78;
	int *ptr=&x;
	//cout<<ptr;
	int *(*ptr1)=&ptr;
//	cout<<*(++ptr)<<endl;
	cout<<*ptr+90<<endl;
	cout<<*(*ptr1)+1<<endl;
	//ptr=ptr+1;
	
	cout<<*ptr+5<<endl;
	return 0;
}
