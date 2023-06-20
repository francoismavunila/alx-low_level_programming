#include "main.h"
/**
 * print_alphabet - Entry point
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
}

