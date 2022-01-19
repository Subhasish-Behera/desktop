#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
   int a,k,p=0,c=0,t=0,b;
   
   cin>>a;
    string s=to_string(a);
    b=s.length();
   k=a;
   
   while(k>0)
   { p=p+(k%10)*pow(10,b-1);
     k=k/10;
     b--;
   }
  cout<<p<<endl;
    return 0;
}
