#include<iostream>    //reverse a string
using namespace std;  //key points 1.learning a a stl function 2.importance of position of function calling 
void revrse(string s);
int main()              
{   
    string s;
    cin>>s;
    cout<<"##################"<<endl;
    revrse(s);
    
}
void revrse(string s)
{   if(s=="")
           {           
              return;
           }
    string ros=s.substr(1);//the stl function
    revrse(ros);
    cout<<s[0]<<endl;
 
}
