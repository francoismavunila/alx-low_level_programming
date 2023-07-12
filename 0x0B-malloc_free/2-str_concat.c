
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

char* str_concat(char* s1, char* s2) {
    int len1 = 0;
    int len2 = 0;
    int i = 0;
    int j = 0;
    char* result;
    
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
    
    result = (char*) malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    
    while (i < len1) {
        _putchar(s1[i]);
        result[i] = s1[i];
        i++;
    }
    
    while (j < len2) {
        _putchar(s2[j]);
        result[i+j] = s2[j];
        j++;
    }
    
    _putchar('\n');
    result[i+j] = '\0';
    return result;
}
