#include "main.h"

/**
 * this functions returns the index(last one) including the Null function
 */

int indxLst(char *z)
{
	int x = 0;

	if (*z > '\0')
		x += indxLst(z + 1) + 1;

	return (x);
}

int is_palindrome(char *s)
{
	int end = indxLst(s);

	return (lookUp(s, 0, end - 1, end % 2));
}



int lookUp(char *s, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (lookUp(s, start + 1, end - 1, pair));
}


