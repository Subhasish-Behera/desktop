#include<iostream>
#include<math.h>
using namespace std;
int noset(int n);
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1
int main()
{    int a;         //CONCEPT 1
     cin>>a; 
    noset(a);          //n and n-1 has same bits except after the rightmost set bit(1)
     return 0;         //that is flip the bits of n after the rightmost set bit(1) in n(including last setbit(1))
}                      //and u will get n-1
int noset(int n)       //eg 6=0110,5=0101
{    int c    ;                //8=1000,7=0111
    if((n&(n-1))==0)
    {
     cout<<"power of 2"<<endl;
    }                                               //CONCEPT 2
     else                                           //IF U (&) n and n-1 dont change anything before  
     {                                              //rightmost set bit and make      
         cout<<" not power of 2"<<endl;
     }                                        
}  