/**
 * get_bit- the functiion
 * 
 * @n: the integer 
 * @index: theh index 
 * Return: returns an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }
    return ((n >> index) & 1);
}
