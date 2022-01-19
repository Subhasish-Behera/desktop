#include<iostream>
#include<math.h>
using namespace std;
int getbit(int n,int pos);
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1(BINARY SYSTEM)
int main()  
{
 cout<<getbit(4,2);
   
    return 0;
}           
int getbit(int n,int pos)
{
    return ((n&(1<<pos))!=0);//output is 1(true)
}