#include<iostream>//for now input an already sorted array
using namespace std;
//void selection(int a[],int n);
//void change(int *x,int *y);
void binarysearch(int arr[],int n,int key);
int main()
{ 
   int a;
   cin>>a;
   int arr[a];
   
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
   int b;
   cin>>b;
   //selection(arr,a); 
   binarysearch(arr,a,b);

}
void binarysearch(int arr[],int n,int key)
{
    int a=0,b=(n);
    while(a<=b)
    {   int t=(a+b)/2;
        if(key==arr[t])
        {
        cout<<t<<endl;
        break;
        }
        else if(key<=arr[t])
        {
          
          b=t-1;
        }
        else if(key>=arr[t])
        {
         a=t+1;
        
        }
    }

}
/*void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}*/
/*void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<(n);j++)
        {    if(a[j]<a[i])
            change(&a[i],&a[j]);
         }
    }
}*/