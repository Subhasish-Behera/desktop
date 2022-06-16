#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       int n,q;
    cin>>n>>q;
    int k;
     vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        cin>>k;
       
        for(int j=0;j<k;j++){
            int tempstorage;
            cin>>tempstorage;
            a[i].push_back(tempstorage);
        }
    }
    for(int i=0;i<q;i++){
        int b,c;
        cin>>b>>c;
        cout<<a[b][c]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}