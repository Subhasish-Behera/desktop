#include<iostream>      
using namespace std; 

int main() 
{
    int i=5;
    int* j=&i;
    int** k=&j;
    cout<<j<<endl;
    cout<<*j<<endl;
    cout<<**k<<endl;
    cout<<*k<<endl;
    cout<<k<<endl;
}
