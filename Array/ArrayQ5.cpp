#include <iostream>
using namespace std;

int main()
{
    int i, A[20],temp,N;
    cout << "Enter the number of elements" << endl;
    cin >> N;
    cout << "Enter the elements" << endl;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < N; i++)
    {
        for(int j=i+1 ; j<N;j++)
        {
        if (A[j] > A[i ])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        }
    }
    for (i = 0; i < N; i++)
    {
        cout << A[i]<<" ";
    }

    return 0;
}