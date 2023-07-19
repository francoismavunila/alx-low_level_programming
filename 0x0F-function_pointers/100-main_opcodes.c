#include "function_pointers.h"

/**
 *comment comment
 */
int main(int argc, char *argv[])
{
	int i;

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	for (i = 0; i < atoi(argv[1]) - 1; i++)
    {
		printf("%02hhx ", ((char *)main)[i]);
    }
	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}


