#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    map<int,int> listcount;
    for (int i = 0; i < n; i++)
    {
        listcount[arr[i]]++;
    }
    int max=0;
    map<int,int> ::iterator itr;
    for(itr=listcount.begin();itr!=listcount.end();itr++)//getting the maximum frequency
{  
   if((*itr).second>max)
   {
       max=(*itr).second;
   }
  
}

if(max==1)//if max freq>2
{
 if(n==1)
 {
     cout<<"0"<<endl;
 }
 cout<<"-1"<<endl;
}
else if(max>1)
{
    cout<<(n-max+1)<<endl;
}
   }
}