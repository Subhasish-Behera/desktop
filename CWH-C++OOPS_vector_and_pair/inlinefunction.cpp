/*#include<iostream>

using namespace std;
inline int product(int a,int b);//shortens the time //useful in short problems
int main()                      //process in compile time
{
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);
     return 0;      
}  
int product(int a,int b)
{
    return a*b;
}*/
//understanding static variables
#include<iostream>
using namespace std;
inline int product(int a,int b);
int main()                      
{   
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);
     return 0;      
}  
int product(int a,int b)
{   static int c=5;
    c=c+11;
    return (a*b)*c;
}