#include<iostream>//playing with iterator
#include<vector>
using namespace std;  
void vectordisplay(vector<int> &v) ;                                                                        
int main()
{  /////////what learned in prev files
    vector<int> v;
    v.push_back(1);              
    v.push_back(2);              
    v.push_back(3);          
    v.push_back(4);                          //iter is a pointer which points to the last element when you use end()
    v.push_back(5);
    cout<<"############"<<endl;
    vectordisplay(v);
    ////////////what learned in prev files
    vector<int> :: iterator iter = v.begin();
    v.insert(iter+2,566);  //will point to index 3(0 is first)                   
    vectordisplay(v);    
     cout<<"############"<<endl;   
     vector<int> :: iterator iter2 = v.end();                  //u need to understand clearly that v.end() and v.begin() are use to assign
     v.insert(iter2-2,566);                                    //pointers
     vectordisplay(v);                                         //while using sort() for arrays u write(arr,arr+4)ie y direct the pointers
}                                                              //for vectors write(v.begin(),v.end())
    void vectordisplay(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<endl;
    }
    
}