#include "function_pointers.h"

/*
*comments comments about function pointers
*/
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
