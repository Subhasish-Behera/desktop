#include<iostream>//how to use itterator and insert
#include<vector>
#include<algorithm>
using namespace std;                         //array index: 0  1  2  3  4  5  6  7
int main()                                   // array     : 10 16 7  14 5  3  2  9  
                                            //sorted array:2  3  5  7  9  10  14  16
{                                            //print output:4  7  2  6  1  0  5  3--------->ranking of the elements
int arr[]={10,16,7,14,5,3,2,9};
vector<pair<int,int>> v;
for(int i=0;i<8;i++)
{   v.push_back(make_pair(arr[i],i));

}
sort(v.begin(),v.end());
for(int i=0;i<((sizeof(arr))/(sizeof(arr[0])));i++)
{
    cout<<v.[i]<<endl;
}
return 0;
}
