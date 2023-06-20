#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
    int i=1;
    char characters = 'a';
    while(i <= 10)
    {
        while(characters <= 'z')
        {
            _putchar(characters);
            characters++;
        }
        i++;
        characters='a';
        _putchar('\n');
    }

}
