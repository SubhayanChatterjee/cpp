#include<iostream>
using namespace std;
int main()
{
	int *x;
	x=(int*)malloc(2);
	*x=5;
	cout<<x;
	return 0;
}
