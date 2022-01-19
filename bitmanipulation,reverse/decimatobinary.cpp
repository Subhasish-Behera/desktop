#include<iostream>
#include<math.h>
using namespace std;
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1
int main()
{
   int a,k,p,t=0,c=0;
   cin>>a;
   k=a;
   while(k>0)
   {
      
       p=k%2;
       t=t+p*(pow(10,c));
        k=k/2;
       c++;
   }
 cout<<t;
    return 0;
}           