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
       for(int i=0;i<=(s.length()-2);i++)
       {
            for(int j=i;j<=(s.length()-2);j++)
       {
           if((g.at(j)=='R'&&g.at(j+1)=='S'))
           {
               g.at(j+1)='R';
           }
           else if((g.at(j)=='R'&&g.at(j+1)=='P'))
           {
               g.at(i+1)='P';
           }
           else if((g.at(j)=='R'&&g.at(j+1)=='R'))
           {
               g.at(j+1)='R';
           }/////////
           else if((g.at(j)=='p'&&g.at(j+1)=='S'))
           {
               g.at(j+1)='S';
           }
           else if((g.at(j)=='p'&&g.at(j+1)=='P'))
           {
               g.at(j+1)='P';
           }
           else if((g.at(j)=='p'&&g.at(j+1)=='R'))
           {
               g.at(j+1)='P';
           }////////
           else if((g.at(j)=='S'&&g.at(j+1)=='S'))
           {
               g.at(j+1)='S';
           }
           else if((g.at(j)=='S'&&g.at(j+1)=='P'))
           {
               g.at(j+1)='S';
           }
           else if((g.at(j)=='S'&&g.at(j+1)=='R'))
           {
               g.at(j+1)='R';
           }
           cout<<"yep"<<endl;
            
       }
       t=t+g.at(s.length()-1);
       g=y;
       }
       t=t+s.at(4-1);
       cout<<t<<endl;
       }
       }