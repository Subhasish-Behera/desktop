#include <iostream>
#include<vector>
using namespace std;
void change(int *x,int *y)
{ 
    int temp=*x;
    *x=*y;
    *y=temp;
   
}
int main() {
     int t;
    cin>>t;
    while(t--)
    { 
        int n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=(n-1);i>0;i--)
    {
        for(int j=0;j<=(i-1);j++)
        {
            if(arr[j+1]<arr[j])
            {
                change(&arr[j+1],&arr[j]);
            }
        }
    }
     for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }

    vector<int> v1;
    vector<int> v2;
    int sum1;
    int countsum1=0;
    int sum2;
    int countsum2=0;
    
    v1.push_back(arr[0]);
    v2.push_back(arr[0]);
    sum1+=v1[0];
    sum2+=v2[0];
    for(int i=2;i<n;i++)
    {
        if((arr[i]+sum1)>(arr[i]+sum2))
        {
            v2.push_back(arr[i]);
            sum2+=v2[countsum2+1];
            countsum2++;
        }
        else
        {
            v1.push_back(arr[i]);
            sum1+=v1[countsum1+1];
            countsum1++;
        }
    }
    if(sum1>sum2)
    {
        cout<<sum1<<endl;
    }
    else
    {
          cout<<sum2<<endl;
    }
    
    
    }	// your code goes here
	return 0;

}