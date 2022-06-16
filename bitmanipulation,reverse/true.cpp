#include <iostream>
using namespace std;

int main() {
     int t;
   cin>>t;
   while(t--)
   { 
       string s;
       int k;
       int m;
     
       cin>>m>>k>>s;
       int c=0;
       for(int i=0;i<(m/2);i++)
       {
           if(s[i]!=s[m-1-i])                                                                            
           {
               c++;
           }
       }
    if(m%2!=0)
    {
       if(c==0||c<=k)
       {
           cout<<"YES"<<endl;
       }
       else
       {
            cout<<"NO"<<endl;
       }
       
    }
    else if(m%2==0)
    {if(c==0)
        {
            if(k%2==0)
            {
             cout<<"YES"<<endl;
            }
            else if(k%2!=0)
            {
             cout<<"NO"<<endl;
            }
        }
        else if(c!=0)
        {
            if(c==k)
            {
                cout<<"YES"<<endl;
            }
            else if(c<k)
            {
                if((k-c)%2==0)
                {cout<<"YES"<<endl;}
                else if((k-c)%2!=0)
                {cout<<"NO"<<endl;}
            }
        }
    }
   }
   return 0;
}

