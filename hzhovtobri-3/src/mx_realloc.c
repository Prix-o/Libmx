#include "../inc/libmx.h"

void *mx_realloc(void*ptr, size_t size) {

    if (ptr == NULL) {
        return malloc(size);
    }

    if (size == 0) {
        free(ptr);
        return NULL;
    }

    void *ret = malloc(size);

    mx_memmove(ret, ptr, size);
    free(ptr);

    return ret;

}


