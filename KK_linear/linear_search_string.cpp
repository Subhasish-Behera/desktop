#include<iostream>
using namespace std;
int linaearsearchstring(string arr,char target);
int main()
{//int a;
//cin>>a;
string arr;
cin>>arr;

char t; 
cin>>t;

cout<<linaearsearchstring(arr,t);

}
int linaearsearchstring(string arr,char target)
{ if(sizeof(arr)==0)
{
    return -1;
}
  for(int i=0;i<sizeof(arr);i++)
  {
      if(arr.at(i)==target)
      {
          return i;
      }
  }
  return -1;
}