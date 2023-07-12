#include<iostream>
using namespace std;

int main()
{
    int A[20],i,N,positive=0,negative=0,zero=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>N;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<N;i++)
    {
       cin>>A[i];
    }
    for(i=0;i<N;i++)
    {
       if(A[i]<0)
       {
         negative++;
       }
       if(A[i]>0)
       {
          positive++;
       }
       if(A[i]==0)
       {
          zero++;
       }
       
    }
    cout<<"The Total Positive Number is "<<positive<<endl;
    cout<<"The Total Negative Number is "<<negative<<endl;
    cout<<"The Total Zero is "<<zero<<endl;
    return 0;
}