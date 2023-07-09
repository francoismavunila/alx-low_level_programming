#include<stdio.h>
#include "main.h"
/**
 * pointers and arrays
 * 
 */
int main(int argc, char *argv[])
{
    int length = 1;
    while(length<argc-1)
    {
        printf("%s\n",argv[length]);
    }
	return (0);
}
