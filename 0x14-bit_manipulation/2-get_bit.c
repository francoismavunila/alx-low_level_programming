#include "main.h"

int get_bit(unsigned long int n, unsigned int index){
   int bit = (n>>index)&1;
   return(bit);
}
