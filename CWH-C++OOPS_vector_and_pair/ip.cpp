#include <iostream>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { 
        long long int b,c;
        cin>>b>>c;
        long long int k=0;
        long long int num=c;
        while(k=0)
        { if(num%b==0)
            {
                k=1;
                 cout<<"####"<<num<<endl;
                break;
               
                
            }
            num=num+c;
           
        }
        long long int num2=(num/b);
        cout<<num2<<endl;
        
    }	// your code goes here
	return 0;

}