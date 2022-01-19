#include<iostream>//max element till i
using namespace std;
int main()
{ int a;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   int b,mx;
   mx=arr[0];
   cin>>b;
   for(int j=1;j<=b;j++)
   {
     /*if(arr[j]>arr[j+1])
     {
         max=arr[j];
     }*/
     mx=max(mx,arr[j]);
   }
   cout<<mx<<endl;
   
    return 0;
}