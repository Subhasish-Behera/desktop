#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int key);
int main()
{ 
       int a;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   int k;
   cin>>k;
  linearsearch(arr,a,k);
}
void linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<i<<endl;
        }
    }
}