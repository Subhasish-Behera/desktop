/*#include <iostream>
using namespace std;

//*#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	    
	}
	return 0;
}*/
#include<iostream> 
#include<string>   
using namespace std;   
void duplicate(string s,int a,int b,int c);
int main()              
{   
    string s;
    cin>>s;
    
    duplicate(s,0,0,0);
    
}
void duplicate(string s,int a,int b,int c)
{  
    if(s=="")
           {  if((a>0&&b>0)||c==0)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
           }
              return;
           }
    string str2=s.substr(1);//the stl function
    string g=s.substr(0,1);
    string f=s.substr(0,0);
    if(g=="10")
    {
    a++;
    }
     if(g=="01")
    {
    b++;
    }
     if(g=="1")
    {
    c++;
    }
        return duplicate(str2,a,b,c);
 
}