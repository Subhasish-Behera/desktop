#include<iostream>     //printing numbers in ascending order upto n   
using namespace std;    //#vvimportant to understad FILO
void ascend(int a);
int main()              
{   int a;
    cin>>a;
    ascend(a);
    return 0;
}
void ascend(int a)
{  if(a==1)
{
  cout<<"1"<<endl ;
}
else 
{ 
ascend(a-1);
cout<<a<<endl;
}
 
}