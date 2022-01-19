#include <iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
      int a,b,c1=0,c2=0,sum=0;
      cin>>a>>b;
      int arr[a];
      for(int i=0;i<a;i++)
      {
          cin>>arr[i];
      }
        for(int i=0;i<a;i++)
      {
       if(arr[i]>=80||arr[i]<=9)
       {
           c1++;
       }
       else
       {
           c2++;
       }
      }
      if(c1%b==0)
      {
          sum=sum+(c1/b);
      }
      else
      {
          sum=sum+(c1/b)+1;
      }
       if(c2%b==0)
      {
          sum=sum+(c2/b);
      }
      else
      {
          sum=sum+(c2/b)+1;
      }
      cout<<sum<<endl;
    }

	return 0;
}