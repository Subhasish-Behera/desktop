#include<iostream>
using namespace std;                                       //similar to structures
class youtube                                             //class =car
{  public:
   string name;                                                      //objects =bmw,volvo,ford------->instance of a class
   string ownername;
   int subscribercount;                                                      //attributes =length,topspeed,colour
};                                                         //behaviour

int main()
{
    youtube youtube1;
   youtube1.name="helloworld";
   youtube1.ownername="subhasishbehera";
   youtube1.subscribercount=1222334;
   cout<<youtube1.name<<endl;
   cout<<youtube1.ownername<<endl;
   cout<<youtube1.subscribercount<<endl;
  
}