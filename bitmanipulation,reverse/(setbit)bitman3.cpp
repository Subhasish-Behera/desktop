#include<iostream>
#include<math.h>
using namespace std;
int setbit (int n,int pos);
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1(BINARY SYSTEM)
//remeber the meaning of position :ones place is 0 and 10s place is 1
int main()
{
 cout<<setbit(5,1);//change to 1 =set
   
    return 0;
}           
int setbit(int n,int pos)
{
    return((n|(1<<pos)));//output is 1(true)
}