// #include<iostream>
// using namespace std;

// void swap();

// void swap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }


// int main()
// {
//     int a=5,b=4;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     swap(a,b);
//     cout<<"after"<<endl;
//     cout<<b<<endl;
//     cout<<a<<endl;

// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int A[20],i,j,k,N,search,a,flag,count=0,b[20];
//     cout<<"Enter the number of elements"<<endl;
//     cin>>N;
//     cout<<"Enter the elements"<<endl;
//     for(i=0;i<N;i++)
//     {
//        cin>>A[i];
//     }

//     cout<<"Enter the number which you want to searched"<<endl;
//     cin>>search;
    
//     // cout<<"Number is found at position ";
//     for(i=0;i<N;i++)
//     {
//        if(A[i]==search)
//        {
//            count++;
//         for(j=0;j<count;j++)
//         {
//             b[j]=i+1;
//         }
//        }
//     }

//     for(j=0;j<count;j++)
//     {
//         cout<<b[j]<<" ";
//     }
    
  
//     return 0;
// }


#include<iostream>
using namespace std;


int main() {
    int N,i,j, A[100],b;
    // cout<<"Enter the Size of list"<<endl;
    cin>>N;
    for(i=0;i<N;i++)
    {
       cin>>A[i];
    }
        
    for(i=0;i<N;i++)
    {
       for(j=i+1;j<N;j++)
       {
          if(A[i]==A[j])
          {
            // b = A[i];
            break;
          }
       }
            b = A[i];

    }
   
      cout<<b;
    
    return 0;
}