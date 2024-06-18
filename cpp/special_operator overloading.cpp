#include<iostream>
using namespace std;
class matrix
{
	int row,col;
	int **arr;
	public:
		matrix();
		matrix(int,int);
		friend istream& operator>>(istream &in,matrix &ob);
		friend ostream& operator<<(ostream &out,matrix &ob);
};
matrix::matrix()
{
}
matrix::matrix(int x,int y)
{
	row=x;
	col=y;
	arr=new int*[row];
	for(int i=0;i<row;i++)
	{
		arr[i]=new int[col];
	}
}
istream& operator>>(istream &in,matrix &ob)
{
cout<<"hey users,put the value of matrix"<<endl;
for(int i=0;i<ob.row;i++)
{
	for(int j=0;j<ob.col;j++)
	{
		cout<<"enter the value "<<i<<j<<endl;
		in>>ob.arr[i][j];
	}
}
	return in;
}
ostream& operator<<(ostream &out,matrix &ob)
{
	out<<"the matrix is"<<endl;
	for(int i=0;i<ob.row;i++)
	{
		for(int j=0;j<ob.col;j++)
		{
			out<<ob.arr[i][j];
		}
		out<<endl;
	}
	return out;
}
int main()
{
	matrix m1(3,3);
	cin>>m1;
	cout<<m1;
	return 0;
}
