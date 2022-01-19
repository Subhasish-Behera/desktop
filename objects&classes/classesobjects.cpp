#include<iostream>

using namespace std;
class employee
{   public:
    string name;
    string company;
    int age;
    void display()
    {
        cout<< "name--->"<<name<<endl;
        cout<< "company--->"<<company<<endl;
        cout<< "age--->"<<age<<endl;
    }
};

int main()
{    employee employee1;
     employee1.name="greendoor";
     employee1.company="facebook";
     employee1.age=21;
     employee1.display();
  
     return 0;      
}  