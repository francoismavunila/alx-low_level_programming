#include "main.h"
/**
 * pointers and arrays
 * 
 */
int _strcmp(char *s1, char *s2)
{
        int difference = 0;
        while(*s1 != '\0')
        {
            difference = *s1-*s2;
            if(difference!=0)
            {
                return difference;
            }
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return 0;
        }else
        {
            return -15;
        }
        
}
