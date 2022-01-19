#include <iostream>
using namespace std;

int main() {


	    int a,b,c,k;
	    cin>>a>>b;
	   c=a-b;
	   k=a%10;
	   if(k==0)
	   {
	       c=c+1;
	   }
	   else 
	   {
	       c=c-1;
	   }
	   cout<<c<<endl;
	   
	return 0;
}