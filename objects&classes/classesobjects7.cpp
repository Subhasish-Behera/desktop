#include<iostream>

using namespace std;//copy constructors------------> u give the same parameters of a object to another object
class employee      //understanding default and user definrd copy
{   
    string name;
    public:
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
    employee(string a,string b,int c)//1.always same name as class,2.always public,3.no return type,4.origin of problem=are we going to do all the object.something for every object we make
    {                                //why not go like the regular getter function ------>we do not invoke a constructor(automatically gets invoked when object is created)
            name=a;
            company=b;
            age=c;
    }
    employee(employee &a)//------------>USER DEFINED COPY CONSTRUCTOR//superficially does the same job as default but the problem is default is not actually a copyy ,ie it is the same as original object's parametrs but a user defined not only makes a entirely new set of pointers that point to diffrent data which actually a copy
    {                              // advantage --a object's changes will remian unaffected by its copy and vice versa
            name=a.name;
            company=a.company;
            age=a.age;
            cout<<"copy constructor ud"<<endl; 
    }
};

int main()
{   
     employee employee1("greendoor","facebook",21);//method 2 to pass value to a constructor
     employee1.display();
   //  employee employee2 =employee("gd","yg",29);//__-------------clarify the doubt as this syntax was valid until we made a copy costructor
     // employee2.display();
     // employee employee3(employee1); M1 COPY CONSTRUCTOR
       employee employee3=employee1;//M2 
      employee3.display();
  
     return 0;      
} 