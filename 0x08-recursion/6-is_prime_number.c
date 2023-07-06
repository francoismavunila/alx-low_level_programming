#include "main.h"
/**
 * pointers and arrays
 * 
 */
int prime_check(int n, int i) {
    if (i == n) {
        return -1;
    }

    if (n % i == 0) {
        return 0; 
    } else {
        return prime_check(n, i + 1); 
    }
}

int is_prime_number(int n) {
    if (n < 2) {
        return 0;
    }
    return prime_check(n, 2);
}
