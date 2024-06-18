#include<iostream>
using namespace std;
class calculator;
class input
{
	int x,y,z;
	public:
		input(){
		}
		input(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"the ans is"<<endl;
		}
		friend class calculator;
};
class calculator
{
int sum;
int mult;
float divide;
float avg;
public:
void calculate(input &ob)
{
	ob.display();
		sum=ob.x+ob.y+ob.z;
	mult=ob.x*ob.y*ob.z;
	divide=(ob.x/ob.y)/ob.z;
	avg=(ob.x+ob.y+ob.z)/3;
	 } 
	 void display()
	 {
	 	cout<<"the sum is"<<" "<<sum<<endl;
	 	cout<<"the multiplied value is"<<" "<<mult<<endl;
	 	cout<<"the value after division is"<<" "<<divide<<endl;
	 	cout<<"the average is"<<" "<<avg<<endl;
		 }	
};
int main()
{
	calculator simple_cal;

	int x,y,z;
	cout<<"give three numbers"<<endl;
	cin>>x>>y>>z;
	//input in;
 input in(x,y,z);
	simple_cal.calculate(in);
	simple_cal.display();
	return 0;
	}
