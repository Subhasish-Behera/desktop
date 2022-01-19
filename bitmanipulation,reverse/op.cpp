
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

        string addBinary(string a, string b) {
            int p=a.length();
            int q=b.length();
            int c=0,d=0;int k=stoi(a);
            int s=0,t=0;int n=stoi(b);
          while(c<p){ 
         d=d+(k%10)*pow(2,c);
         k=k/10;
         c++;
      
       }
       cout<<d<<endl;
             while(s<q){ 
         t=t+(k%10)*pow(2,s);
         n=n/10;
         s++;
      
       }
       cout<<s<<endl;
            int ans=d+t;
            //////////////////////////
             int a1,k1,p1,t1=0,c1=0;
     k1=ans;
       while(k1>0)
       {
          
           p1=k1%2;
           t1=t1+p1*(pow(10,c1));
            k1=k1/2;
           c1++;
       }
      string s1=to_string(t1);
            return s1;
            
            
        }
        int main()
{
 
   string a;
   string b;
   cin>>a;
   cin>>b;
   cout<<addBinary(a,b);
    return 0;
}

    