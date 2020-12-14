#include <iostream>
#include <cstdlib> // для exit()
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "fun.h"

using namespace std;

void Massiv()
{
    int N=35;
    int A[N];
    int i=0;
    int Max=0,modul=0,b=0;
    srand(time(0));
    for(i=0;i<N;i++)
    {

        A[i]=rand()%100-50;
        cout<< A[i]<<", ";
    }
    for(i=0;i<N;i++)
    {
        if(A[i]<0)
        {
            modul=A[i]*(-1);
        }
        if(A[i]>0 || A[i]==0)
        {
            modul=A[i];
        }
        if(Max<modul)
        {
            Max=modul;
        }
    }
    cout<< "\n\n\n"<< "Izmen Massiv"<<endl;
    for(i=0;i<N;i++)
    {
        if(Max==A[i] || A[i]==Max*(-1))
        {
            A[i]=A[i]*(-1);
        }
cout<< A[i] << ", ";
    }

}