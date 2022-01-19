#include<iostream>      //array is sorted or not  
using namespace std;     
void checksorted(int arr[],int a);
int main()             
{     int a;
      cin>>a;
      int arr[a];
      for(int i=0;i<1;i++)
      {
          cin>>arr[i];
      }
      checksorted(arr,a);
    return 0;
}
void checksorted(int arr[],int a)
{
 if(arr[a-1]>arr[a-2])
 {
  checksorted;
 }
}