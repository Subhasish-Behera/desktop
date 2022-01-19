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
/*void selection(int a[],int n);;
{    
    for(int i=N;i>0;i--)
    {    int temp,k,max=a[0];
        for(int j=1;j<i;j++)
        {   
            if(a[j]>a[j-1])
            {
                max=a[j];
                k=j;

            }
            
        }
        change(&max,&a[i]);
    }
}*/
void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}
/*void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    { int min=a[i];
        for(int j=i;j<(n-1);j++)
        {
            if(a[j+1]<a[i])
            {
              min= a[j+1] ;
            }
        }
        change(&a[i],&min);
    }
}*/
void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<(n);j++)
        {    if(a[j]>a[i])
            change(&a[i],&a[j]);
         }
    }
}