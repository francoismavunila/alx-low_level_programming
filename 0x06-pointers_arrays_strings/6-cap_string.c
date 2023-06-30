#include "main.h"
/**
 * pointers and arrays
 * 
 */

char *cap_string(char *a)
{
    char *str_ptr;
    str_ptr=a;
    while(*a != '\0')
    {
        if((*a>96) && (*a<123) && (*a != ',' || *a != ';' || *a != '.' || *a != '!' || *a != '?' || *a != '"' || *a != '(' || *a != ')' || *a != '{' || *a != '}'))
        {
            *a = *a-32;
        }
        a++;
    }
    return str_ptr;
}
