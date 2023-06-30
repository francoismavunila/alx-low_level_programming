#include "main.h"
/**
 * pointers and arrays
 * 
 */

char *string_toupper(char *a)
{
    char *str_ptr;
    str_ptr = a;
    while(*a != '\0')
    {
        if((*a==97) || (*a==65))
        {
            *a = 52;
        }else if((*a==97) || (*a==65)){
            *a = 51;
        }
        else if((*a==111) || (*a==79)){
            *a = 48;
        }else if((*a==116) || (*a==84)){
            *a = 55;
        }else if((*a==108) || (*a==76)){
            *a = 49;
        }
        a++;
    }
    return str_ptr;
}
