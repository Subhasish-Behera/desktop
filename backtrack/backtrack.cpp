#include<iostream>
using namespace std;
bool issafe(int** arr,int x,int y,int n);
bool ratinmaze(int** arr,int x,int y,int n,int** solnarray);
int main()
{  int n;
   cin>>n;
   int arr[][10];
  for(int i=0;i<10;i++)
   {
      for(int j=0;j<10;j++)
   {
       cin>>arr[i][j];
   }
 
   }
   int solnarray[n][n];
      for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j ++)
   {
       solnarray[i][j]=0;
   }
 
   }
  if(ratinmaze(arr,0,0,n))



}
bool issafe(int** arr,int x,int y,int n)
{
    if(x<n&&y<n&&arr[x][y]==1)
    {
        return true;
    }
     return false;
}
bool ratinmaze(int** arr,int x,int y,int n,int** solnarray)
{   if(x==n-1 && y==n-1)
     {
      solnarray[x][y]==1;
      return true;
     }
    if(issafe(arr,x,y,n))
    {
        solnarray[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solnarray))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solnarray))
        {
            return true;
        }
        solnarray[x][y]=0;
        return false;

    }
}