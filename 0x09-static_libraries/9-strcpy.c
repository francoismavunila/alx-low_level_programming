#include "main.h"
/**
 * pointers and arrays
 * 
 */
char *_strcpy(char *dest, char *src)
{
	int count = -1;

	do {
		count++;
		dest[count] = src[count];
	} while (src[count] != '\0');

	return (dest);
}

