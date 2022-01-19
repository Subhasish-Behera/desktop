#include<iostream>//14

using namespace std;

int main()
{
  union money         //union is similar to structure.
                      //but u can only use one of the predefined datatypes defined in them
{                     //by c++ implements memory optimisation
    int rice;//4         //the concept is expression in terms one of the following
    float pounds;//4
    string car;//1
};   
union money dollars;
dollars.rice=5;
dollars.car="mercedes";
cout<<dollars.rice<<endl;
//cout>>dollars.car>>endl;
}   