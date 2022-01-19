#include<iostream>
#include<math.h>    
#include<string>
using namespace std;
int main()
{
   int a,c=0,p=0 ;
    cin>>a;
    int k=a;
   string s=to_string(a);
   int b=s.length();
   while(c<b)
   { 
     p=p+(k%10)*pow(2,c);
     k=k/10;
     c++;
  
   }
   cout<<p;
    
}
