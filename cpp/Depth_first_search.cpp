#include<iostream>
using namespace std;
int visit[7]={0,0,0,0,0,0,0};
int arr[7][7]={
{0,1,1,1,0,0,0},{1,0,1,0,0,0,0},{1,1,0,1,1,0,0},{1,0,1,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}
};
void dfs(int i)
{
	cout<<i;
	visit[i]=1;
	for(int j=0;j<7;j++)
	{
		if(arr[i][j]==1&&visit[j]==0)
		{
			dfs(j);
		}
	}
	
}
int main()
{
	dfs(4);
	return 0;
}
