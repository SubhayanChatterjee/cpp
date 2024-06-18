#include<iostream>
using namespace std;
class living
{
	protected:
	string name;
	int no_leg;
	public:
		living(string x,int y)
		{
		name=x;
		no_leg=y;
		}
	virtual	void display()
		{
		cout<<"hdgds";	
		}
		
};
class bird:public living
{
	int no_wings;
	public:
		bird(string x,int y,int z):living(x,y)
		{
			no_wings=z;
		}
		void display()
		{
			cout<<name<<no_leg<<no_wings<<endl;
		}
};
int main()
{
	bird b("eagle",2,2);
	living *l;
	l=&b;
	l->display();
//	l->display1();
	return 0;
	}
