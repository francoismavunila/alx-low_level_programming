#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    size_t s1_len = 0;
    size_t s2_len = 0;
    char *result;
    size_t i;
    if (s1 == NULL) {
        s1 = ""; // treat NULL as an empty string
    }
    
    while (s1[s1_len] != '\0') {
        s1_len++;
    }
    
    while (s2[s2_len] != '\0') {
        s2_len++;
    }
    if (n >= s2_len) {
        n = s2_len; // use entire s2 if n >= s2_len
    }
    result = malloc(s1_len + n + 1); // allocate memory for result
    if (result == NULL) {
        exit(EXIT_FAILURE); // exit if malloc fails
    }
    
    for (i = 0; i < s1_len; i++) {
        result[i] = s1[i]; // copy s1 into result
    }
    for (i = 0; i < n; i++) {
        result[s1_len + i] = s2[i]; // copy first n bytes of s2 into result
    }
    result[s1_len + n] = '\0'; // null-terminate result
    return result;
}
