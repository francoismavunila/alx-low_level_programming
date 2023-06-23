#include "main.h"

/**
 * print numbers
 *   check
 * Return:0 or 1
 */
void print_square(int size)
{
    int i;
    i = size;
    if(size<=0)
    {
        _putchar('\n');
        return;
    }
    while(size>0)
    {
        while(i>0)
        {
            _putchar('#');
            i--;
        }
        size--;
        _putchar('\n');
    }

}
