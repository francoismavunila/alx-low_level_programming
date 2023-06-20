#include "main.h"


/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	char characters[8]="_putchar";
    	int i=0;
    	for(i=0;i<=7;i++)
    	{
        	_putchar(characters[i]);
    	}
    	_putchar('\n');
    	return 0;
}

