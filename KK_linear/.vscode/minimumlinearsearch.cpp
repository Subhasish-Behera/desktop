#include<iostream>
using namespace std;
int minarray(int arr[]);
int main()
{int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}



cout<<minarray(arr);

}
int minarray(int arr[])
{   int min=arr[0];
  for(int i=1;i<sizeof(arr);i++)
  {
      if(arr[i]>arr[i-1])
      {
          min=arr[i];
      }
  }
  return min;
}