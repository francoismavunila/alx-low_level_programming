#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
typedef struct dog dog_t;

void free_dog(dog_t *d) {
    if (d == NULL) {
        return;
    }
    free(d->name);
    free(d->owner);
    free(d);
}
