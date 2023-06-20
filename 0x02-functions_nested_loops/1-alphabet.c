#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
void print_alphabet(void)
{
    char characters = 'a';
    while(characters <= 'z')
    {
        _putchar(characters);
        characters++;
    }
    _putchar('\n');
    return 0;
}

