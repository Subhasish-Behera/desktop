#include<iostream>    
using namespace std;   //Q=aaaabbcccdddddd
void duplicate(string s,int i);//A=abcd
int main()              
{   
    string s;
    cin>>s;
    cout<<"##################"<<endl;
    duplicate(s,0);
    
}
void duplicate(string s,int i)
{   if(s=="")
           {  for(int j=0;j<i;j++)
              {
                  cout<<"x";
              }   
              return;
           }
    string str2=s.substr(1);//the stl function
    if(s[0]=='x')
    {
     i++;
    }
    else
    {
        cout<<s[0];
    }

        return duplicate(str2,i);
 
}