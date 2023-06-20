#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
int _isalpha(int c)
{
    if(64 < c && c < 91 || 96 < c && c < 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
