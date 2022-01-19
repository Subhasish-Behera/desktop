#include <iostream>
#include<string>
using namespace std;

int main()
{  int t;
   cin>>t;
   while(t--)
   {
       int a;
       cin>>a;
       string s;
       cin>>s;
       string g=s;
       string y=s;
       string t="";
       for(int i=0;i<(4-1);i++)
       {
            for(int j=i;j<(4-1);j++)
       {
           if((g.at(i)=='R'&&g.at(i+1)=='S'))
           {
               g.at(i+1)='R';
           }
           else if((g.at(i)=='R'&&g.at(i+1)=='P'))
           {
               g.at(i+1)='P';
           }
           else if((g.at(i)=='R'&&g.at(i+1)=='R'))
           {
               g.at(i+1)='R';
           }/////////
           else if((g.at(i)=='p'&&g.at(i+1)=='S'))
           {
               g.at(i+1)='S';
           }
           else if((g.at(i)=='p'&&g.at(i+1)=='P'))
           {
               g.at(i+1)='P';
           }
           else if((g.at(i)=='p'&&g.at(i+1)=='R'))
           {
               g.at(i+1)='P';
           }////////
           else if((g.at(i)=='S'&&g.at(i+1)=='S'))
           {
               g.at(i+1)='S';
           }
           else if((g.at(i)=='S'&&g.at(i+1)=='P'))
           {
               g.at(i+1)='S';
           }
           else if((g.at(i)=='S'&&g.at(i+1)=='R'))
           {
               g.at(i+1)='R';
           }
            
       }
       t=t+g.at(4-1);
       g=y;
       }
       t=t+s.at(4-1);
       cout<<t<<endl;
       }
       }

   
  
   
   