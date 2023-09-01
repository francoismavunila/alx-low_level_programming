#include<stdio.h>

/**
 * binary_to_uint - converts binary value to int
 * @b: the pointr to the bin value
*/

unsigned int binary_to_uint(const char *b)
{

   
    int value = 0;
    

    while(*b != '\0')
    {

        if(*b == '1'){
            value = value*2+1;
        }
        else if (*b == '0')        
        {
            value=value*2;
        }
        b++;
    }
    return value;
}


