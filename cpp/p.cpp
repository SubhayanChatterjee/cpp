	
	#include<iostream>
	using namespace std;
	
	int main(){
	int m=1;
	int n=1211;
	while(n!=0)
	{
		
		n=n/10;
		m=m*10;
	}
	m=m/10;
	cout<<m;
	return 0;
}
