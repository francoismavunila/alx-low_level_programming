#include <stdlib.h>
#include "main.h"

/**
 * comment here
 */
int getWords(char *z)
{
	int num;
	int x;
	int z;

	num = 0;
	z = 0;

	for (x = 0; z[x] != '\0'; x++)
	{
		if (z[x] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			z++;
		}
	}

	return (z);
}


char **strtow(char *str)
{
	char **mptr, *ptr2;
	int i;
	int x = 0;
	int k = 0;
	int len = 0;
	int words;
	int end, start;

	while (*(str + len))
		len++;
	words = getWords(str);
	if (words == 0)
		return (NULL);

	mptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (mptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				ptr2 = (char *) malloc(sizeof(char) * (x + 1));
				if (ptr2 == NULL)
					return (NULL);
				while (start < end)
					*ptr2++ = str[start++];
				*ptr2 = '\0';
				mptr[k] = ptr2 - x;
				k++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = i;
	}

	mptr[k] = NULL;

	return (mptr);
}

