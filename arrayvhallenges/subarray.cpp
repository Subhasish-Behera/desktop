#include<iostream>//max element till i
using namespace std;
int main()
{  int a,sum=0;
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
    sum=sum+arr[k];
       }
   }
   
   }
   cout<<sum<<endl;
    return 0;
}