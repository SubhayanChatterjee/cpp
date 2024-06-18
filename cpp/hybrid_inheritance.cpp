#include<iostream>
using namespace std;
class student
{
	protected:
	string name;
	int roll;
	public:
		void display()
		{
			cout << "Name: " << name << ", Roll: " << roll << endl;
		}
};
class test:virtual public student
{
	protected:
		int math_score;
		int physics_score;
		int chemistry_score;
		public:
			void display()
			{
	    cout << "Test Marks:" << endl;
        cout << "Math: " << math_score << endl;
        cout << "Physics: " << physics_score << endl;
        cout << "Chemistry: " << chemistry_score << endl;
			}
};
class sport:virtual public student
{
	protected:
		char sport_grade;
		public:
			void dispaly()
			{
			   cout << "Sports Grade: " << sport_grade << endl;
			}
};
class result:public test,public sport
{
	int static count;
	public:
		result(){
		}
		void input()
		{
			cout<<"enter the details of student"<<" "<<count++<<endl;
			cout<<"enter your name"<<endl;
			cin>>name;
			cout<<"enter your roll"<<endl;
			cin>>roll;
			cout<<"enter your mathematics marks"<<endl;
			cin>>math_score;
			cout<<"enter your physics marks"<<endl;
			cin>>physics_score;
			cout<<"enter your chemistry mark"<<endl;
			cin>>chemistry_score;
			cout<<"enter your sports grade"<<endl;
			cin>>sport_grade;
		
					}
					int static c;
		void display()
		{
	    	cout<<"enter the details of student"<<" "<<c++<<endl;
			student::display();
			test::display();
			test::display();
					}
	
};
int result::count=1;
int result::c=1;
int main()
{
	result res[4];
	for(int i=0;i<4;i++)
	{
    res[i].input()	;
}
for(int i=0;i<4;i++)
{
    res[i].display();
}
	return 0;
	}
