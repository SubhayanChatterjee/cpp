#include<iostream>
using namespace std;
void pass(string st[],int n)
{
		for(int i=0;i<5;i++)
	{
		cout<<st[i]<<endl;
	}
	cout<<endl;
}
int main()
{
	string st[5]={"********",                               
	               "   *   ",
				   "   *   ",
				   "   *   ",
				   "*******" };
    string st1[5]={"*",
                   "*",
	               "*",
				   "*",
				   "******" };
	string st2[5]={" ******** ",
	               " *      * ",
				   " *      * ",
				   " *      * ",
				   " ******** "};
	string st3[5]={" *       *",
	               "  *     *",
				   "   *   * ",
				   "    * *  ",
				   "     *   "};
    string st4[5]={"********",
                   "*",
                   "********",
                   "*",
                   "*********",
	};
	string st5[6]={"*       *",
	               "*       *",
				   "*       *",
				   "*       *",
				   "*********"};
				   
	pass(st,5);
	pass(st1,5);
	pass(st2,5);
	pass(st3,5);
	pass(st4,5);
	pass(st5,5);			   			   

	return 0;
}
