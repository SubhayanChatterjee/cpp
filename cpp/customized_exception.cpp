#include<iostream>
using namespace std;
class myexception
{
	int a;
	public:
		myexception(int x)
		{
			a=x;
		}
		void show()
		{
			cout<<a<<endl;
		}
	const char *what() const throw()
	{
		return "i donot know";
	}
};
int main()
{
	myexception ob(2);
	try
	{
		int n;
		cin>>n;
		if(n<0)
		{
			throw ob;
		}
	}
	catch(myexception &ob)
	{
		cout<<ob.what();
		ob.show();
			}
	return 0;
}
