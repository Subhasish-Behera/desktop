#include<iostream>//max element till i
using namespace std;
int main()
{ int a,cd,pcd,ml=2,count1=-1,count2=0,defaul;
   cin>>a;
   int arr[a];
   int arr1[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
        cout<<"//////////////////"<<endl;
    for(int i=0;i<(a-1);i++)
   {
    cd=arr[i+1]-arr[i];
    if(i>0)
    {
    pcd=arr[i]-arr[i-1];
    if(pcd==cd)
    {
        ml=ml+1;
    }
    else if(pcd!=cd)
    {   count1=count1+1;
        arr1[count1]=ml;
        ml=2;
        count2=count2+1;
    }
    }
    
   }
   defaul=arr1[0];
   for(int i=0;i<(count2);i++)
   {
   /* if(arr1[i+1]>arr1[i])
    {
        defaul=arr1[i+1];
    }*/
     cout<<arr1[i]<<",";
   }
   //cout<<defaul<<endl;
   
    return 0;
}