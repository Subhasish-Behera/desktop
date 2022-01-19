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
};

int main()
{    employee employee1;
     employee1.company="facebook";
     employee1.age=21;
     employee1.set("greendoor");
     employee1.display();
  
     return 0;      
}  