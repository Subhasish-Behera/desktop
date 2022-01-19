#include<iostream>      
using namespace std; 
void print(int* a);
int main() 
{
    int marks[4];
    int *ptr;
    ptr=&marks[0];
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>(i+1);
        scanf("%d",ptr);
        ptr++;
    }


}
void print(int *a)
{

}