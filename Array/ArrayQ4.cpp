#include<iostream>
using namespace std;

int main()
{
    int A[20],i,N,search,a,flag,count=0,b[20]={};
    cout<<"Enter the number of elements"<<endl;
    cin>>N;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<N;i++)
    {
       cin>>A[i];
    }

    cout<<"Enter the number which you want to searched"<<endl;
    cin>>search;
    
    cout<<"Number is found at position ";
    for(i=0;i<N;i++)
    {
       if(A[i]==search)
       {
        // count++;
        // b[20] = i+1; // can't write this
        cout<<i+1<<",";
       }
    }
    
    // cout<<"Position "<<b[20]<<endl;
    // cout<<"Number "<<count<<endl;
    return 0;
}