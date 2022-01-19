#include<iostream>
using namespace std;
void change(int* x,int* y);
int main()
{
   int a,b;
   cout<<"write a and b";
   cin>>a>>b;
   cout<<"the value of a and b is"<<(a)<<" "<<b<<endl;
   change(&a,&b);
    cout<<"the new value of a and b is"<<(a)<<" "<<b<<endl;
    return 0;
}

void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}
