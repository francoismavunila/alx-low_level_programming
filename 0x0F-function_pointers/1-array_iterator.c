#include "function_pointers.h"

/*
*comments comments about function pointers
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
        int count = 0;
        for(count;count<size;count++)
        {
            action(array[count]);
        }
}
