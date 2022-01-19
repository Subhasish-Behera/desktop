#include<iostream>        //find gcd
using namespace std;     //9=3*3
int euclid(int a,int b);//12=2*2*3
int main()              //gcd=3
{   int a,b;
    cin>>a>>b;
   cout<<euclid(a,b)<<endl;
      return 0;
}
int euclid(int big,int small)
{   int k;
/*int big,small;
    if(a>b)
    {
     big=a;
     small=b;
    }
    else
    {
    big=b;
    small=a;
    }*/
    while(k!=0)//k>=0
    {
    k=big%small;
     big=small;
     small=k;
    }
   
return big;          //check return small
}