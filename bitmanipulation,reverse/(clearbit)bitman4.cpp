#include<iostream>
#include<math.h>
using namespace std;
int clearbit (int n,int pos);
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1(BINARY SYSTEM)
//remeber the meaning of position :ones place is 0 and 10s place is 1
int main()
{
 cout<<clearbit(5,2);//change to 0=clear
   
    return 0;
}           
int clearbit(int n,int pos)    //n=0101 ,(1<<pos)=0100
{   int mask=~(1<<pos);                 //~(1<<pos)=1011
    return((n&mask));//                            &0101
}                                               // =0001