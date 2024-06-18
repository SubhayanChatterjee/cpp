#include<iostream>
using namespace std;
class dist
{
	int feet,inch;
	public:
		dist(){
		}
		dist(int x,int y)
		{
			feet=y;
			inch=x;
		}
		dist operator++()
		{
			inch++;
			if(inch>=12)
			{
				feet++;
				inch=0;
			}
			//return dist(feet,feet);
		}
		dist operator++(int )
		{
			dist temp(inch,feet);
			inch++;
		if(inch>=12)
		{
			feet++;
			inch=0;
			}
			return temp;	
		}
void show()
{
	cout<<"the new updated distance:"<<"inch is"<<" "<<inch<<" "<<"the feet is :"<<" "<<feet<<endl;
	}	
};
int main()
{
	dist d1(11,11);
	dist d4=dist(3,3);
	d4.show();
		dist d2,d3;
	++d1;
	d1.show();
d3=d1++;
//d3=d1;
	d3.show();
		return 0;
	}
