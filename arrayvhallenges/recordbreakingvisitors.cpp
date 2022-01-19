#include<iostream>//max element till i
using namespace std;
int recordbreaking(int arr[],int a);
int main()
{  int a;
   cin>>a;
   int arr[a];
   int arr1[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
   }
        cout<<"//////////////////"<<endl;  
   cout<<recordbreaking(arr,a)<<endl;
   
    return 0;
}
int recordbreaking(int arr[],int a)
{   int p=0;
    for(int i=0;i<a;i++) 
    {
        if(i=0)
        {
            if(arr[1]<arr[0])
            {
              p++;
            }
        }
        else if((i<=(a-2))&&(i>=1))
        {   int c=0;
            for(int j=0;j<i;j++)
            {
            if(arr[i]>arr[j])
            {
            c++;
            }
            if((c==i)&&(arr[i+1]<arr[i]))
            {
             p++;
            }
        
            }
        }
    else if(i==(a-1))
    {    int c=0;
        for(int j=0;j<i;j++)
        {
           if(arr[i]>arr[j])
           {
             c++;
           }
           if((c==i))
           {
             p++;
           }
        }
    }
    }
    return p;

}