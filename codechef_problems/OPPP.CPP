#include <iostream>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { int c,t,l;
       cin>>c>>t>>l;
int min=0;
int max=0;
if(c>2*t)
{
min=((c-2*t)+t)*4;
max=(c+t)*4;
}
else if(c<=2*t)
{
min=(t)*4;
max=(c+t)*4;
}
if((l<=max)&&(l>=min)&&(l%4==0))
{
cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}



}	// your code goes here
	return 0;

}