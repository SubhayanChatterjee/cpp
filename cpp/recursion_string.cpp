// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
string palindrome(string s,int n)
{
    string y;
    if(n<0)
    {
        return "";
    }
    else
    {
        y+=s[n];
       // n--;
       return s[n]+palindrome(s,n-1);
       // return y;
     // return s[n]+palindrome(s,n-1);
    }
  //  return y;
}
int main()
{
    //int arr[5]={1,2,3,4,5};
  // print(arr,4);
  string str="hello";
  int n;
  n=str.length();
  string r;
  r=palindrome(str,n-1);
   cout<<r;
    return 0;
}
