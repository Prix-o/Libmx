#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {

    if (s == NULL)
    {
        return NULL;
    }
    
    unsigned char *temp1 = (unsigned char *) s;

    
    for(size_t i = 0; i < n; i++) {
       

        if (*temp1 == c) {
            void* res = temp1;
            return res;
        }
        temp1++;

    }
    return NULL;

}

