#include<iostream>

using namespace std;//how to pass the private members indirectly by calling functions
class employee
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
};

int main()
{   // employee employee1 =employee("greendoor","facebook",21);//procedure to pass the value through constructor(think of it as a getter
                                                             //in reality we use getter for private datamembers
    /* employee1.company="facebook";
     employee1.age=21;
     employee1.set("greendoor");*/
     employee employee1("greendoor","facebook",21);//method 2 to pass value to a constructor
     employee1.display();
      employee employee2 =employee("gd","yg",29);
      employee2.display();
  
     return 0;      
}  