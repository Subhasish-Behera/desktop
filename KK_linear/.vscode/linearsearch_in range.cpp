#include<iostream>
using namespace std;
int linaearsearch(int arr[],int target,int a,int b);
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

int a;
cin>>a;

int b;
cin>>b;

cout<<linaearsearch(arr,t,a,b);

}
int linaearsearch(int arr[],int target,int a,int b)
{ if(sizeof(arr)==0)
{
    return -1;
}
  for(int i=a;i<b;i++)
  {
      if(arr[i]==target)
      {
          return i;
      }
  }
  return -1;
}