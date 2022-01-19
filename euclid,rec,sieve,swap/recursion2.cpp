#include<iostream>        
using namespace std;     
int power(int a,int b);
int main()             
{     int a,b;
      cin>>a>>b;
      cout<<power(a,b)<<endl;
      return 0;
}
int power(int a,int b)
{   if(b==1)
    {
         return a;
    }
    else
    {
    return a*power(a,b-1);
    }
}