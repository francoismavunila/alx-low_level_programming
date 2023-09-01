#include "main.h"
/**
 * print_binary- a function that prints the inary equiv of an int
 * @n: the int
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
    if((n & 1) == 0)
    {
        n=n>>1;
        if(n != 0)
        {
        print_binary(n);
        }
       _putchar('0');
    }else
    {
        n=n>>1;
        if(n != 0)
        {
        print_binary(n);
        }
        _putchar('1');
    }
    

}
