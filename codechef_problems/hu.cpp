#include <iostream>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { int a;
     cin>>a;
     int k=a;
int count1=0;
int count0=0;
     while(k>0)
{int rem=k%10;
if(rem==1)
{
count1++;
}
if(rem==0)
{
count0++;
}
k=k/10;

}
if((count1==1)||(count0==1))
{cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}

     } 
	return 0;

}