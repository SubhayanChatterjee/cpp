#include<iostream>
using namespace std;
class number
{
	int x;
	public:
		number(){
		}
	number(int a)
	{
		x=a;
	}
	friend number operator+=(number &ob,int z);
	void display();
	};
	void number::display()

{
	cout<<"the value is "<<x<<endl;
	}
		number operator+=(number &ob,int z)
	{
		//number temp;
		ob.x+=z;
		//temp.x=ob.x;
		return number(ob.x);
	}
	int main()
	{
		number num(56);
		num.display();
				num+=6;
		num.display();
		return 0;
			}
