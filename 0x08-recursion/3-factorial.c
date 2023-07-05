#include "main.h"
/**
 * pointers and arrays
 * 
 */
int factorial(int n)
{
    if(n<0){
       return -1;
    }else if((n==1) || (n==0)){
        return 1;
    }
    return n*factorial(n-1);
}
