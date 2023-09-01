#include "main.h"
/**
 * clear_bit - te function used to clear
 * @n: the pointer to the val
 * @index: the index
 * Return: the return value
*/

int clear_bit(unsigned long int *n, unsigned int index){
    int powered = (1UL<<index);
    int value ;
    powered = ~powered;
    value = *n & powered;
    *n = value;
    if (index >= sizeof(unsigned long int) * 8) 
    {
        return (-1);
    }else{
        return (1);
    }
    
}
