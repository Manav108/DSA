#include<iostream>
using namespace std;

int main()
{
    int A[20],i,N,small,large;
    cout<<"Enter the number of elements"<<endl;
    cin>>N;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<N;i++)
    {
       cin>>A[i];
    }
    small = A[0];
    large = A[0];
    for(i=0;i<N;i++)
    {
       if(A[i]<small)
       {
          small=A[i];
       }
       if(A[i]>large)
       {
          large=A[i];
       }
       
    }
    cout<<"The Smallest Number is "<<small<<endl;
    cout<<"The Largest Number is "<<large<<endl;
    return 0;
}