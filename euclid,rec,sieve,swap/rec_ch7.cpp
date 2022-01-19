#include<iostream>    //replace a part of string
using namespace std;  //eg
void replace(string a,string b,string c,int a1,int b1,int c1,int i); //"piojrjddpidbexbpi"
int main()              //"3.14ojrjdd3.14dbexb3.14"
{   
    string a;
    cin>>a;
     string b;
    cin>>b;
     string c;
         cin>>c;
     int a1=a.length();
      int b1=b.length();
       int c1=c.length();

    cout<<"##################"<<endl;
   replace(a,b,c,a1,b1,c1,0);
    
}
void replace(string a,string b,string c,int a1,int b1,int c1,int i)
{   if(a=="")
           {           
              return;
           }
           int t=0;
    for(int j=0;j<b1;j++)
    {
      if(a.at(j)==b.at(j))
     {
       t=t+1;  
     }
    }
    
    if(t==b1)
    {
    cout<<c;
    a=a.substr(b1);
    }
    else
    {
     cout<<a[i];
     a=a.substr(1);
    }
    
    return replace(a,b,c,a1,b1,c1,i);
 
}