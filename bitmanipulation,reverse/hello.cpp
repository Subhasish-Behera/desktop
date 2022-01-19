#include <iostream>
#include<string>
using namespace std;

int main()
{  int t;
   cin>>t;
   while(t--)
   {
     int h,v;//
     cin>>h;
     cin>>v;
     string s="";
     if(h>v)
     {
      s=s+"0";
      for(int i=0;i<(h-v-1);i++)
      {
          s=s+"100";
      }   
      for(int i=0;i<(v);i++)
      {
          s=s+"10";
      }
      s=s+"10";
     }
     else if(v>h)
     {
          s=s+"1";
      for(int i=0;i<(v-h-1);i++)
      {
          s=s+"011";
      }   
      for(int i=0;i<(h);i++)
      {
          s=s+"01";
      }
      s=s+"01";
     }
     else if(h==v)
     {
          s=s+"0";
          for(int i=0;i<h;i++)
          {
              s=s+"10";
          }
          s=s+"1";
     }
     cout<<s.length()<<endl;
      cout<<s<<endl;
    
     
   }
  
   
   }