#include<iostream>
using namespace std;
int linaearsearch(int arr[],int target);
int main()
{int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}

int t;
cin>>t;

cout<<linaearsearch(arr,t);

}
int linaearsearch(int arr[],int target)
{ if(sizeof(arr)==0)
{
    return -1;
}
  for(int i=0;i<sizeof(arr);i++)
  {
      if(arr[i]==target)
      {
          return i;
      }
  }
  return -1;
}