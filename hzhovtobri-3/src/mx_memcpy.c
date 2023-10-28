#include "../inc/libmx.h"

void* mx_memcpy(void* restrict dst, const void* restrict src, size_t n) {

    if (src == NULL)
    {
        return NULL;
    }

    unsigned char *temp1 = (unsigned char *) dst;
    unsigned char *temp2 = (unsigned char *) src;

    for (size_t i = 0; i < n; i++)
    {
        *(temp1+i) = *(temp2+i);
    }
    return dst;

}




