#include<iostream>
#include<vector>
using namespace std;                                      
                                                 
int main()
{
    vector<int> v;//vector is a dynamic array where you can increase or decrease size ie no need to specify the size of the array
    v.push_back(1);              //beforehand
    v.push_back(2);              //push_back is used to input in arrays .it keeps the value at the end of the array
    v.push_back(3);              //like arrays the index starts from 0
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<endl;
    }
    vector<int> v1;

    for(int i=0;i<5;i++)//instead of u call also use v.size()
    {   int ele;
        cin>>ele;
        v1.push_back(ele);
       // cout<<v1[i]<<endl;
    }
     for(int i=0;i<5;i++)
    {
        cout<<v1[i]<<endl;
    }

}
//////////////
#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            arr[i]=abs(c);
        }
        vector<int> v1;
        vector<int> v2;
           for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                v1.push_back(arr[i]);  
            }
            else
            {
                v2.push_back(arr[i]);
            }
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end());
        int sum=0;
      for(int i=0;i<v1.size();i++)
    {
        sum=sum+v1[i];
    }
    sum=sum-2*v1[v1.size()];
    for(int i=0;i<v2.size();i++)
    {
        sum=sum-v2[i];
    }
    sum=sum+2*v1[v1.size()];
        
        cout<<sum<<endl;
    }	// your code goes here
	return 0;

}