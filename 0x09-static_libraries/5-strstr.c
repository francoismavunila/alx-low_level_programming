#include "main.h"

/**
 * pointers and arrays
 * 
 */

char *_strstr(char *haystack, char *needle)
{
	char *data = haystack, *fn = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (data);
		}
		needle = fn;
		data++;
		haystack = data;
	}
	return (0);
}
