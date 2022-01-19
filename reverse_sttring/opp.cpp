 #include <iostream>
using namespace std;
int digit(string s,string b,int a);
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,e=0,f;
        cin>>a>>b;
        f=a;
        string s1=to_string(f);
        string s2=to_string(b);
        while(d!=0)
        {d=digit(s1,s2,0);
       if(d!=0)
        {
             f++;
        }
           
        }
        int k=f-a;
        cout<<k<<endl;
    }
  


}
int digit(string s, string b,int a)
{   if(s=="")
           {           
             return a;
           }
    string ros=s.substr(1);
     if(s.substr(0,0)==b)
{
a++ ;
}
    digit(ros,b,a);
 
}
