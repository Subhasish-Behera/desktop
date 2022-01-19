#include<iostream>
using namespace std;
void bubbles(int a[],int n);
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
   bubbles(arr,a);
   cout<<"**********************"<<endl;
   for(int i=0;i<a;i++)
   {
    cout<<arr[i]<<endl;
   }
  
}
void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}
void bubbles(int a[],int n)
{
    for(int i=(n-1);i>0;i--)
    {
        for(int j=0;j<=(i-1);j++)
        {
            if(a[j+1]<a[j])
            {
                change(&a[j+1],&a[j]);
            }
        }
    }
    
}