#include<iostream>
using namespace std;
void linear(int arr[],int a,int key);
int main()
{
int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
int key;
cin>>key;
linear(arr,a,key);
for(int i=0;i<a;i++)
{
    cout<<arr[i];
}
}
void linear(int arr[],int a,int key)
{  

    for(int i=0;i<a;i++)
    {
        if(arr[i]==key)
         {
             cout<<i;
             break;
         }
    }
}