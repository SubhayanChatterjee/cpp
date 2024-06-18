#include<iostream>
using namespace std;
void mult(int y)
{
	cout<<"happy"<<y<<endl;
}
double mult(double a ,double b)
{
	return a*b;
}
int mult(int a,int b)
{
	return a*b;
}
int mult(double a ,double b,double c)
{
	return a*b;
}
int main()
{
	mult(3);
	cout<<mult(3.1,3.1)<<endl;
	cout<<mult(3.0,6.0)<<endl;
	cout<<mult(3.0,6.1,9.4)<<endl;
	return 0;
}
