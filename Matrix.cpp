#include <iostream>
#include <cstdlib> // для exit()
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "fun.h"
using namespace std;

void  Matrix()
{
    int C=9,D=8;
    int B[C][D];
    int i=0,j=0;
    int Max=0,modul=0,b=0;
    srand(time(NULL));
    for(i=0;i<C;i++)
    {
        for(j=0;j<D;j++)
        {
            B[i][j]=rand()%100-50;
            cout<< B[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<C;i++)
        {

            for(j=0;j<D;j++)
                {
                    if(B[i][j]<0)
                    {
                        modul=B[i][j]*(-1);
                    }
                    if(B[i][j]>0 || B[i][j]==0)
                    {
                        modul=B[i][j];
                    }
                    if(Max<modul)
                    {
                        Max=modul;
                    }
                }

    }
      cout<< "\n\n\n"<< "Izmen Matrix"<<endl;
      for(i=0;i<C;i++)
        {
            for(j=0;j<D;j++)
               {
                   if(Max==B[i][j] || B[i][j]==Max*(-1))
                    {
                        B[i][j]=B[i][j]*(-1);
                    }
                        cout<< B[i][j] << " ";
                }
                cout<<endl;
         }
}