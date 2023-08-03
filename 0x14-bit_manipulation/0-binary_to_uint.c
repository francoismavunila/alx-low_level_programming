#include <stdio.h>
/**
 * binary_to_uint - te function that converts the binary values to unsigned int
 * 
 * @b: the pointer to the most significant bit 
 * @return unsigned int 
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int converted = 0;
    int count = 0;
    
    if (b == NULL)
    {
        return (0);
    }

    while (b[count] != '\0')
    {
        if (b[count] == '0')
        {
            converted = converted * 2;
        }
        else if (b[count] == '1')
        {
            converted = converted * 2 + 1;
        }
        else
        {
            return 0;
        }
        count++;
    }

    return converted;
}

