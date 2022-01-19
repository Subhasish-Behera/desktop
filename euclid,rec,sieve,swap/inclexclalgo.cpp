#include<iostream>//how many number are divisible by a or b
using namespace std;
int divisible(int n,int b,int a);
int main()
{   int a,b,c;
    cin>>a>>b>>c;
   cout<<divisible(c,b,a)<<endl;
      return 0;
}
int  divisible(int n,int b,int a)
{
int c1=n/a;
int c2=n/b;
int c3=n/(a*b);
return (c1+c2-c3);
}