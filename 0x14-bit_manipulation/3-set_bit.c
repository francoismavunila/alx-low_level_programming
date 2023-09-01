#include "main.h"
#include<stdio.h>
unsigned int power(int num){
int val = 1;

 while(num>0){
    val = val*2;
    num--;
 }
 return(val);
}
int set_bit(unsigned long int *n, unsigned int index)
{
    int powered = (1<<index);
    int value = *n | powered;
    *n = value;
    return (1);
}
