#include<iostream>
#include<math.h>
using namespace std;
int c=45;
int main()
{   int a,b,c;
    cin>>a>>b>>c;
    cout<<"local c is "<<c<<endl;
    cout<<"global c is "<<::c;

     return 0;      
}   