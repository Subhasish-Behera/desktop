#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


	     long long int a,sum=0;
	    cin>>a;
	    long long int arr[a];
	   for( long long int i=0;i<a;i++)
	   {
	       cin>>arr[i];
	   }
	 long long int &min = *min_element(arr,arr+a );
     long long int &max = *max_element(arr,arr+a );
    for( long long int i=min;i<=max;i++)
    {    long long int p=0;
        for( long long int j=0;j<a;j++)
	   {if(arr[j]>=i)
	   {
	    p=p+(i);
	   }
	   }
	   if(p>sum)
	   {  // cout<<"the"<<i<<endl;
	       sum=p;
	   }
    }
    cout<<sum<<endl;
	return 0;
}
///////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

int main()
{
   //your code goes here
   long long int n;
   cin>>n;
   long long int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   
   long long int max=0;
   for(int i=0;i<n;i++)
   {
        long long int temp=arr[i]*(n-i);
        if(temp>max){
            max=temp;}
   }
   cout<<max;
}