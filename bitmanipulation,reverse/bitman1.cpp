#include<iostream>
#include<math.h>
using namespace std;
int clearbit (int n,int pos);
int updatebit(int n,int pos,int update);
int setbit(int n,int pos);
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1(BINARY SYSTEM)
//remeber the meaning of position :ones place is 0 and 10s place is 1
int main()
{
 cout<<updatebit(5,1,1);//change to 0/1 according to the user at desired position
   
    return 0;
}           
int clearbit(int n,int pos)    //n=0101 ,(1<<pos)=0100
{   int mask=~(1<<pos);                 //~(1<<pos)=1011
    return((n&mask));//                            &0101
}    
int setbit(int n,int pos)
{
    return((n|(1<<pos)));//output is 1(true)
}
int updatebit(int n,int pos,int update)
{
    if(update==0)
    {
       return clearbit(n,pos);
    }
    else if(update==1)
    {
       int p=clearbit(n,pos);
       return setbit(p,pos);
    }
}