#include<iostream>
#include<math.h>
float moneyrecivied(int cuurentmoney,float factor=1.04)//v imp --->alway write the default argument i  the last .ie ucan not write flaot factor at firt
{                                                      //the reason is there is no way is tell if the value u are passing is for which argument
    return cuurentmoney*factor;
}
using namespace std;

int main()
{   int currentmoney,factor;
    cin>>currentmoney>>factor;
    cout<<"money recived is"<<moneyrecivied(currentmoney)<<endl;//use of default argument.when no value is given
    cout<<"money recived is"<<moneyrecivied(currentmoney,factor)<<endl;
    

     return 0;      
}   
