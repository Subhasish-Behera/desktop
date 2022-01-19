#include<iostream>
#include<math.h>

int sum(int a,int b,int c);//the compiler diffrentiate between functions of same name by diffrence in number of arguments or type of argument
int sum(int a,int b);
int volume(int r,int h);
int volume(int a);
int volume(int a,int b,int c);

using namespace std;

int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"the sum of 1,2,3"<<sum(1,2,3)<<endl;
    cout<<"the sum of 1,2"<<sum(1,2)<<endl;
    cout<<"the volume of cylinder of 1,2"<<volume(1,2)<<endl;
    cout<<"the volume of cube of side 3"<<volume(3)<<endl;
    cout<<"the volume of cuboid of side 1,2,3"<<volume(1,2,3)<<endl;
    return 0;      
}  
int sum(int a,int b,int c)
{
  return a+b+c;
}
int sum(int a,int b)
{
    return a+b;
}
int volume(int r,int h)
{
    return 3.14*r*h;
}
int volume(int a)
{
    return a*a*a;
}
int volume(int a,int b,int c)
{
    return a*b*c;
}