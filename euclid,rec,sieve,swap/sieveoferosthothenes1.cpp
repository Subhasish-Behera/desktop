#include<iostream>        
using namespace std;     
void sieveofero(int a);
int main()              
{   int a;
    cin>>a;
   sieveofero(a);
      return 0;
}
void sieveofero(int a)
{   int arr[100];
  for(int i=0;i<100;i++)
  {
      arr[i]=0;
  }

     for(int i=2;i<=a;i++)
     {
         if(arr[i]==0)
         {
         for(int j=i*i;j<=a;j=j+i)
             {
              arr[j]=1;
             }
         }
     }
   for(int i=2;i<=a;i++)
  {
     if(arr[i]==0)
     {
         cout<<(i)<<" ";
     }
  }
          
}