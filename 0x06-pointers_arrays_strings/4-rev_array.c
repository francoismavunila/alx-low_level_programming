#include "main.h"
/**
 * pointers and arrays
 * 
 */
void reverse_array(int *a, int n)
{
    int count = 0;
    int temp;
    n=n-1;
    while(count < n)
    {
        temp = a[count];
        a[count] = a[n];
        a[4] = temp;
        count++;
        n--;
    }
}
