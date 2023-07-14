#include <stdlib.h>
#include "main.h"
/**
 * pointers and arrays
 * 
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
    if (nmemb == 0 || size == 0) {
        return NULL; // return NULL if nmemb or size is 0
    }
    void *ptr = malloc(nmemb * size); // allocate memory for array
    if (ptr == NULL) {
        return NULL; // return NULL if malloc fails
    }
    // set memory to zero using memset
    memset(ptr, 0, nmemb * size);
    return ptr;
}
