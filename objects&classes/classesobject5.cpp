#include<iostream>

using namespace std;//default constructor
class employee
{  
    public:
    string name;
    string company;
    int age;
    void set(string c)
    {
         name=c;
    }
    void display()
    {
        cout<< "name--->"<<name<<endl;
        cout<< "company--->"<<company<<endl;
        cout<< "age--->"<<age<<endl;
    }
    employee()
    {
         cout<<"its a default constructor:"<<endl;
    }//in default constructor there should be no parameter; and remember that in a class there is only one costructor
    // a  manual(like employee(string a,string b,int c) and a default can work together in a single class. it all depends u have passed the parametrs or not

    /*employee(string a,string b,int c)
    {                               
            name=a;
            company=b;
            age=c;
    }*///------------>a real constructor--------> parameterised constructor
};

int main()
{    /*employee employee1 =employee("greendoor","facebook",21);//procedure to pass the value through constructor(think of it as a getter
                                                             //in reality we use getter for private datamembers
    employee1.company="facebook";
     employee1.age=21;
     employee1.set("greendoor");
     employee1.display();
      employee employee2 =employee("gd","yg",29);
      employee2.display();*/
      employee a;//-----------> directly default constructor would be called//its impo
  
     return 0;      
}  