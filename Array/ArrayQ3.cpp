#include<iostream>
using namespace std;

int main()
{
    int A[20],i,N,even=0,odd=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>N;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<N;i++)
    {
       cin>>A[i];
    }
    for(i=0;i<N;i++)
    {
       if(A[i]==0)
       {
         continue;
       }
       else if (A[i]%2==0)
       {
            even++;
       }
       else
       {
           odd++;
       }
          
       
       
    }
    cout<<"The Total Even Number is "<<even<<endl;
    cout<<"The Total Odd Number is "<<odd<<endl;
    return 0;
}