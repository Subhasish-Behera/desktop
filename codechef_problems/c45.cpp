#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{  int t;
   cin>>t;
   while(t--)
   {
   int a,max=0;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<a;i++)
   {
        for(int j=0;j<a;j++)
   {
        for(int k=0;k<a;k++)
   {
      if((abs((arr[i])−(arr[j]))+abs((arr[j])−(arr[k]))+abs((arr[k])−(arr[i])))>max)
      {
          max=(abs((arr[i])−(arr[j]))+abs((arr[j])−(arr[k]))+abs((arr[k])−(arr[i])));
      }
   }
       
   }
       
   }
   }
  
   
   }
   //
   #include<algorithm>
   sort (a,a+n);
	     cout<<2*(a[n-1]-a[0])<<"\n";