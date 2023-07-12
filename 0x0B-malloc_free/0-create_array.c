#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pointers and arrays
 * 
 */
int i;
char* create_array_of_chars(size, char c) {
    char* arr = malloc(size * sizeof(char));  
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = c; 
    }
    return arr;  
}
