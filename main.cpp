#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "libfind.h"


using namespace std;





int main()
{
    int i,N,count;
    cout<<"Enter length of array: "<<endl;
    cin>>N;
    cout<<"N="<<N<<endl;

    int *A = new int [N];

    srand (time(NULL));

    for(i=0;i<N;i++)
    {
      //  cout<<"2!"<<endl;
        A[i]=rand() % 20; //or 100 000
       // cout<<"A[i]= "<<A[i]<<endl;
    }

   // cout<<"1!"<<endl;

    cout<<"An array was generated! "<<endl;

    cout<<"[";

    for(i=0;i<N;i++)
    {
        if (i==N-1)
        {
            cout<<A[i];
            break;
        }
        cout<<A[i]<<", ";
    }
    cout<<"]"<<endl;
    cout <<"Go function findDifferentArray(A,N)"<<endl;
    count = findDifferentArray(A,N);
    cout <<"P = "<<count<<endl;
    cout <<"cleaning after ourselves"<<endl;

    delete [] A; // высвобождение памяти

    return 0;
}
