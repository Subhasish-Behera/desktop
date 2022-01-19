#include<iostream>//how to pass vector in a method
#include<vector>
using namespace std;                                      
void vectordisplay(vector<int> &v);                                       
int main()
{
    vector<int> v;//vector is a dynamic array where you can increase or decrease size ie no need to specify the size of the array
                  //beforehand
                  //push_back is used to input in arrays .it keeps the value at the end of the array
                  //like arrays the index starts from 0
     vector<int> v1;

    for(int i=0;i<5;i++)//instead of u call also use v.size()
    {   int ele;
        cin>>ele;
        v1.push_back(ele);
       // cout<<v1[i]<<endl;
    }
    vectordisplay(v1);
    v1.pop_back();       //pop back :it removes the last element//vimp note:always print by transversing the loop upto v.size() and not upto is previous size   
    vectordisplay(v1);
    
}
void vectordisplay(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl
    }
    
}

