#include<iostream>      
using namespace std; 

int main() 
{
   int n;
   cin>>n;
   int p=n;
   while(p>0)
   {
       int k=p%10;
       cout<<k;
       p=p/10;

   }
}
