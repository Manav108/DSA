// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> v;
    int n,i,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x=v.size()-1;
    for(i=0;i<v.size()/2;i++)
    {
        temp=v[i];
        v[i]=v[x];
        v[x]=temp;
        x--;
    }
    for(auto &i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}