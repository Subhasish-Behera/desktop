#include <iostream>
using namespace std;
void dfs(int i,int n);
int main()
{  
     int n;
     cin>>n;
     for(int i=1;i<10;i++)
     {
         dfs(i,n);
     }
	return 0;
}
void dfs(int i,int n)
{
    if(i>n)
    {
    return;
    }
 cout<<i<<endl;
 for(int j=0;j<10;j++)
 {
     dfs(i*10+j,n);
 }
}