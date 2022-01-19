#include<iostream>
using namespace std;
void insertions(int a[],int n);
//void change(int *x,int *y);
int main()
{ 
     int a;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   insertions(arr,a);
   cout<<"**********************"<<endl;
   for(int i=0;i<a;i++)
   {
    cout<<arr[i]<<endl;
   }
  
}
 /*void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}*/
void insertions(int a[],int n)
{
/*{
    for(int i=0;i<=(n-1);i++)
    {
        for(int j=1;j<(n-i);j++)
        {
           if(a[j-1]<a[j])
           {
             change(&a[j-1],&a[j]);
           }
        }
    }*/
   /* for(int i=0;i<(n);i++)
    { int current=a[i];
    int j=i-1;
    while(a[j]>current&&j>=0)//because the array in left side is sorted//j>0 because any deep further is out of scope
    {
      a[j+1]=a[j]; 
      j--;
    }
     a[j+1] =current;//j+1 because the j by default decreases by 1 when comes out of the loop
    }*/
    
}
 for(int i=0;i<(n);i++)
    { int current=a[i];
    int j=i-1;
    while(a[j]>current&&j>=0)//because the array in left side is sorted//j>0 because any deep further is out of scope
    {
      a[j+1]=a[j]; 
      j--;
    }
     a[j+1] =current;//j+1 because the j by default decreases by 1 when comes out of the loop
    }