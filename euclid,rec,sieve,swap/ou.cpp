#include<iostream>    
using namespace std;  
int duplicate(string s,int a);
int main()              
{   int t;
    //cin>>t;
   // while (t--)
   // {
    int a;
     cin>>a;
    string s;
    cin>>s;
    int p=duplicate(s,0);
    if(p%2!=0)
    { cout<<"SAHID"<<endl;
       
       
    }
    else
    {
       cout<<"RAMADHIR"<<endl ;
    }
 }
}
int duplicate(string s,int a)
{   if(s=="")
           {           
              return a;
           }
    string str2=s.substr(1);//the stl function
    if(s[0]!=str2[0])
    {
     a++;
    }

        return duplicate(str2,a);
 
}