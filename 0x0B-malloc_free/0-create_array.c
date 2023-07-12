#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pointers and arrays
 * 
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
    char* arr = malloc(size * sizeof(char));  
    if (arr == NULL) {
        return NULL;
    }
    for (i = 0; i < size; i++) {
        arr[i] = c; 
    }
    return arr;  
}
