/**
 * flip_bits - the function
 * 
 * @n: the value 
 * @m: the second values
 * Return: the integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int x = n ^ m;
    unsigned int y = 0;
    while (x != 0)
    {
        y++;
        x &= (x - 1);
    }
    return (y);
}
