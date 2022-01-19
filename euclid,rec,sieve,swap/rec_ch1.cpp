#include<iostream>     //printing numbers in descending order from n   
using namespace std;    
void descend(int a);
int main()              
{   int a;
    cin>>a;
    descend(a);
    return 0;
}
void descend(int a)
{  if(a>0)
   {
   cout<<a<<endl;
   descend(a-1);
   }
 
}