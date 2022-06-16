#include <iostream>
#include<vector>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { int n,x;
      cin>>n>>x;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
     
      vector<int> v;
      for(int i=0;i<n;i++)
      {
         if(arr[i]<x)
         {
             v.push_back(i+1); 
         }
      }
      int c=v.pop_back()
      cout<<c<<endl;
        
    }	// your code goes here
	return 0;

}
////////////
// #include <iostream>
// #include<map>
// #include<string>
// using namespace std;

// int main() {
//      int t;
//     cin>>t;
//     while(t--)
//     { int n;
//       string s;
//       cin>>n>>s;
//       map<char,int> marks;
//       for(int i=0;i<n;i++)//input array
//      {
//        marks[s[i]]++;
//      }  
//      map<char,int> ::iterator itr;
//      int count =0;
//       for(itr=marks.begin();itr!=marks.end();itr++)//getting the maximum frequency
// {  
//    count =count+(((*itr).second)/2)+(((*itr).second)%2);
  
// }
     
//      cout<<count<<endl;
        
//     }	// your code goes here
// 	return 0;

// }///////////////////
#include <iostream>
#include <cstdlib>
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
        int maxeven=arr[0];
        int strmaxeven=0;
        
        int minodd=arr[0];
        int strminodd=0;
          for(int i=0;i<n;i++)
        {  if(i%2!=0)
             {
              if(arr[i]>=maxeven)
              {
                  strmaxeven==i;
                   maxeven=arr[i];
              }
             }
           else if(i%2==0)
           {
               if(arr[i]<=minodd)
              {   minodd=arr[i];
                  strminodd==i;
                  
              }
             }
           }
           int temp;
           temp=arr[strminodd];
           arr[strminodd]=arr[strmaxeven];
           arr[strmaxeven]=temp;
           int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
             {
                 sum=sum+arr[i];
             }
             else 
             {
                  sum=sum-arr[i];
             }
        }
        cout<<sum<<endl;
    }	// your code goes here
	return 0;

}
/////////////////////
#include <iostream>
#include <cstdlib>
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
        int maxeven=arr[0];
        int strmaxeven=0;
        
        int minodd=arr[0];
        int strminodd=0;
          for(int i=0;i<n;i++)
        {  if(i%2!=0)
             {
              if(arr[i]>=maxeven)
              {
                  strmaxeven==i;
                   maxeven=arr[i];
              }
             }
           else if(i%2==0)
           {
               if(arr[i]<=minodd)
              {   minodd=arr[i];
                  strminodd==i;
                  
              }
             }
           }
           int temp;
           temp=arr[strminodd];
           arr[strminodd]=arr[strmaxeven];
           arr[strmaxeven]=temp;
           int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
             {
                 sum=sum+arr[i];
             }
             else 
             {
                  sum=sum-arr[i];
             }
        }
        cout<<sum<<endl;
    }	// your code goes here
	return 0;

}



