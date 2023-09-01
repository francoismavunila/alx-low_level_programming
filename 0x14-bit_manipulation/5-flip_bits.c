#include"main.h"
/**
 * get_bit - gets the bits that are set
 * flip_bits - flips the bits
 * @n:first val
 * @m:second val
 * Return: integer
*/

int get_bit(unsigned long int n, unsigned int index){
   int bit = (n>>index)&1;
   return(bit);
}
unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned int val = n ^ m;
    unsigned int count=0;
    int number_ones=0;
    while(count<(sizeof(val)*8))
    {
        int num = get_bit(val,count);
      
        if(num==1){
            number_ones++;
        }
        count++;
    }
    return(number_ones);
    
}
