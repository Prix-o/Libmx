#include "../inc/libmx.h"

void* mx_memccpy(void* restrict dst, const void* restrict src, int c, size_t n) {

    if (src == NULL)
    {
        return NULL;
    }
    

    unsigned char *temp1 = (unsigned char *) dst;
    unsigned char *temp2 = (unsigned char *) src;

    for (size_t i = 0; i < n; i++)
    {
        *(temp1+i) = *(temp2+i);
        if ((int)(temp1[i]) == c)
        {
            return temp1+i+1;
        }
        

    }
    return NULL;

}

