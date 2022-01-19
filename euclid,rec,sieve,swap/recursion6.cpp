#include<iostream>        
using namespace std;     
int fibonacii(int a);
int main()             
{     int a;
      cin>>a;
      cout<<fibonacii(a)<<endl;
      return 0;
}
int fibonacii(int a)
{   if(a==1)
    {
        return 0;
    }
    else if(a==2)
    {
        return 1;
    }

    else
    {
    return fibonacii(a-1)+fibonacii(a-2);
    }
}