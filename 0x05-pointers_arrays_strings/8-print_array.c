#include "main.h"
#include <stdio.h>
/**
 * pointers and arrays
 * 
 */
void print_array(int *a, int n)
{

    int count=0;
    while(count<n)
	{
	printf("%d", a[count]);

        count++;
	if(count==n){
	 continue;
	}
	printf(", ");
    }

    
   printf("\n");
}
