#include "../inc/libmx.h"

void *mx_memmove(void*dst, const void*src, size_t len) {

    if (src == NULL)
    {
        return NULL;
    }

    unsigned char *temp1 = (unsigned char *) dst;
    unsigned char *temp2 = (unsigned char *) src;
    unsigned char *temp3 = malloc(len);

    for (size_t i = 0; i < len; i++)
    {
        *(temp3+i) = *(temp2+i);
    }

    for (size_t i = 0; i < len; i++)
    {
        *(temp1+i) = *(temp3+i);
    }

    free(temp3);
  

    return dst;

}

