#include<iostream>//max element till i
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int a,sum=0;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<a;i++)
   {
    for(int j=i;j<a;j++)
   {
       for(int k=i;k<=j;k++)
       {
         if(arr[k]=(k+1))
         {
             sum++;
         }
         
       }
   }
   /////////////////////////////////
     /*int v=0;
      for(int i=1;i<=r;i++)
      {
          if((i*a)==c&&(i*b)==d||((i+1)*a)==c&&(i*b)==d||((i)*a)==c&&((i+1)*b)==d)
          {
              v++;
              break;
          }
      }
      if(v==1)
      {
          cout<<"YES"<<endl;
      }
      else if(v==0)
      {
           cout<<"NO"<<endl;
      }
      
    }*/