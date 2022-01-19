#include<iostream>
using namespace std;
void selection(int a[],int n);
void change(int *x,int *y);
int main()
{ 
     int a;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   selection(arr,a);
   for(int i=0;i<a;i++)
   {
    cout<<arr[i];
   }
  
}

void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}

void selection(int a[],int n)
{
    for(int i=n-1;i>0;i--)
    {
     for(int j=i-1;j>=0;j--)
        {    if(a[j]>a[i])
            change(&a[i],&a[j]);
         }
    }
}
/*void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<(n);j++)
        {    if(a[j]<a[i])              //alternative method
            change(&a[i],&a[j]);
         }
    }
}*/