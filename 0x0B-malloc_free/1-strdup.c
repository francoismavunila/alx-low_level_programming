#include <stdlib.h>
#include <unistd.h>

char* _strdup(char* str) {
    if (str == NULL) {
        return NULL;
    }
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char* result = (char*) malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    int i = 0;
    while (i < len) {
        write(1, &str[i], 1);
        result[i] = str[i];
        i++;
    }
    write(1, "\n", 1);
    result[i] = '\0';
    return result;
}
