#include<iostream>
using namespace std;
class student
{
	protected:
	string name;
	int roll;
	public:
	/*	student(string x,int y)
		{
			name=x;
			roll=y;
		}*/
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
		/*	test(string y,int w,int a,int b,int c):student(y,w)
			{
				math_score=a;
				physics_score=b;
				chemistry_score=c;
			}*/
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
		/*	sport(string y,int q,int s):student(y,q)
			{
				sport_grade=s;
			}*/
			void display()
			{
			   cout << "Sports Grade: " << sport_grade << endl;
			}
};
class result:public test,public sport
{
	int static count;
	public:
		
		
		result(string x,int y,int s,int a,int b,char c)
			{
			name=x;
			roll=y;
			math_score=s;
			physics_score=a;
			chemistry_score=b;
			sport_grade=c;
		}
					int static c;
		void display()
		{
	    	cout<<"enter the details of student"<<" "<<count++<<endl;
			student::display();
			test::display();
			sport::display();
			//sport::display();
								}
	
};
int result::count=1;
int result::c=1;
int main()
{
	//result res("harry",12,90,99,89,'A');
	
	res.display();
		return 0;
	}
