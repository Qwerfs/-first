#include <iostream>
#include <cstdlib> // для exit()
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "load.h"



using namespace std;



int main()
{

	int a=0,b=1;
	printf("Choose library:\n1-Massiv.\n2-Matrix,\n3-quit\n");
	while(b)
	{
		scanf("%d",&a);
		if(a==1)
			LoadRun("lib1.dll",1);
		if(a==2)
			LoadRun("lib2.dll",2);
		if(a==3)
		b=0;
	}
    cout<<endl;
    system("pause");
    return 0;
}



