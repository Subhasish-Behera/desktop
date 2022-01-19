#include<iostream>     //printing the first occurence of an digit in an array
using namespace std;   //key things to learn:pointer increment,printing index of an array member in a function call
int firocc(int* arr,int key,int i,int n);//printing the last occurence of an digit in an array
int lastoccc(int* arr,int key,int i,int n,int store);
int main()              
{   int a;
    cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
    int key;
    cin>>key;
    cout<<"//////////////////"<<endl;  
    //cout<<firocc(arr,key,0,a)<<endl;
    cout<<lastoccc(arr,key,0,a,-1)<<endl;
    return 0;
}
int firocc(int* arr,int key,int i,int n)
{  
    if(i==n)
   {   cout<<"the digit is not found in the array"<<endl;
       return 0;
   }
   if(key==*arr)
   {
       return i;
   }
   else
   {
     return firocc(arr+1,key,i+1,n);
   }
 
}
int lastoccc(int* arr,int key,int i,int n,int store)
{  
      if(i==n)
   {   if(store==-1)
       {
        cout<<"the digit is not found in the array"<<endl;
        return 0;
       }
       else
       {
        return store;
       }
       
   }
   if(key==*arr)
   {
      store=i;
   }
   
     return lastoccc(arr+1,key,i+1,n,store);
   
 
}