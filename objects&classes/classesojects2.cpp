#include<iostream>

using namespace std;//ways to input mulitple objects
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
{    employee arr[3];//creating a array of datatype employee(proof that class is but a datatype)
     for(int i=0;i<3;i++)
     {   cin>>arr[i].name;
         cin>>arr[i].company;
         cin>>arr[i].age;
        
         
     }
      for(int i=0;i<3;i++)
     {  arr[i].display();
         
     }
     return 0;      
}  