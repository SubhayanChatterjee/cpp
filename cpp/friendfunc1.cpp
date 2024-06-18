#include<iostream>
using namespace std;
class hod;
class employee
{
	string name;
	int salary;
	int emp_id;
	public:
		employee()
		{
		}
		employee(string x,int y,int z)
		{
			name=x;
			salary=y;
			emp_id=z;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<salary<<endl;
			cout<<emp_id<<endl;
		}
		void enhance(hod &hd);
};
class hod
{
	string name;
	int salary;
	int hod_id;
	public:
		hod()
		{
		}
		hod(string x,int y,int z)
		{
			name=x;
			salary=y;
			hod_id=z;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<salary<<endl;
			cout<<hod_id<<endl;
		}
		friend void employee::enhance(hod &hd);
};
void employee::enhance(hod &hd)
{
	hd.salary+=salary;
}
int main()
{
	employee emp("rahim",10000,121);
	hod h1("samaresh",12000,201);
	emp.display();
	h1.display();
	cout<<"after promotion the salary of hod becomes"<<endl;
	emp.enhance(h1);
	h1.display();
		return 0;
}
