#include "main.h"
/**
 * pointers and arrays
 * 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	char *z = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				p++;
				break;
			}
		if (!(*--accept))
			break;
		accept = z;
	}
	return (p);
}
