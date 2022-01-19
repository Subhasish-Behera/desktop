#include<iostream>    
using namespace std;   //Q=aaaabbcccdddddd
void duplicate(string s);//A=abcd
int main()              
{   
    string s;
    cin>>s;
    cout<<"##################"<<endl;
    duplicate(s);
    
}
void duplicate(string s)
{   if(s=="")
           {           
              return;
           }
    string str2=s.substr(1);//the stl function
    if(s[0]!=str2[0])
    {
     cout<<s[0]<<endl;
    }

        return duplicate(str2);
 
}