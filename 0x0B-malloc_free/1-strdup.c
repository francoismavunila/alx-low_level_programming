#include <stdlib.h>
#include <unistd.h>

char* _strdup(char* str) {
    size_t len = 0;
    char* result;
    size_t i;

    if (str == NULL) {
        return NULL;
    }
    
    while (str[len] != '\0') {
        len++;
    }
    
    result = (char*) malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    
    for (i = 0; i < len; i++) {
        write(1, &str[i], 1);
        result[i] = str[i];
    }
    
    write(1, "\n", 1);
    result[i] = '\0';
    return result;
}
