#include<iostream>
#include<vector>
using namespace std; 
// class Solution {
// public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        vector<int> :: iterator iter = v.begin();
        for(int i=0;i<nums.size();i++)
        {
            v.insert(iter+index[i],nums[i]);
        }
        return v;
        
        
    }
// };                                     
                                                 
int main()
{vector<int> nums;//vector is a dynamic array where you can increase or decrease size ie no need to specify the size of the array
    nums.push_back(0);              //beforehand
    nums.push_back(1);              //push_back is used to input in arrays .it keeps the value at the end of the array
    nums.push_back(2);              //like arrays the index starts from 0
    nums.push_back(3);
    nums.push_back(4);
    vector<int> index;
    index.push_back(0);              //beforehand
    index.push_back(1);              //push_back is used to input in arrays .it keeps the value at the end of the array
    index.push_back(2);              //like arrays the index starts from 0
    index.push_back(2);
    index.push_back(1);
    vector<int> p=createTargetArray(nums,index);
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<endl;
    }

}
