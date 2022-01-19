#include<iostream>        
using namespace std;     
int factorial(int a);
int main()             
{     int a;
      cin>>a;
      cout<<factorial(a)<<endl;
      return 0;
}
int factorial(int a)
{   if(a==1)
    {
         return 1;
    }
    else
    {
    return a*factorial(a-1);
    }
}