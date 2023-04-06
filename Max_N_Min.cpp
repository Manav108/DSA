// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> v;
    int n,i,maxV=INT_MIN,minV=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x=v.size()-1;
    for(i=0;i<v.size();i++)
    {
        maxV=max(maxV,v[i]);
        minV=min(minV,v[i]);
    }
    cout<<"Max=> "<<maxV<<" "<<"Min=> "<<minV<<endl;
    return 0;
}