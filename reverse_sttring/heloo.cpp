#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    //int t;
   // cin>>t;
    //while (t--)
    //{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    int i=0;
    for(int j=0;pow(2,j)<n;j++)
    {
        i=j;
    }
    cout<<i<<endl;

        
        
    }
    
      
      
    
 
