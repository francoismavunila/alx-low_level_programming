#include "main.h"
#include<stdio.h>

/**
 * _putchar - writes the character c to stdout
 *  The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
    while(n<=98)
    {
        if(n!=98)
        {
                printf("%d, ",n);
        }else
        {
                printf("%d",n);
        }
        
        n++;
    }
}

