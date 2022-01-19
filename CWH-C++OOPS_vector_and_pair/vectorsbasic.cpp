#include<iostream>
#include<vector>
using namespace std;                                      
                                                 
int main()
{
    vector<int> v;//vector is a dynamic array where you can increase or decrease size ie no need to specify the size of the array
    v.push_back(1);              //beforehand
    v.push_back(2);              //push_back is used to input in arrays .it keeps the value at the end of the array
    v.push_back(3);              //like arrays the index starts from 0
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<endl;
    }
    vector<int> v1;

    for(int i=0;i<5;i++)//instead of u call also use v.size()
    {   int ele;
        cin>>ele;
        v1.push_back(ele);
       // cout<<v1[i]<<endl;
    }
     for(int i=0;i<5;i++)
    {
        cout<<v1[i]<<endl;
    }

}