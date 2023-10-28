#include <unistd.h>
#include <stdio.h>


void *mx_memrchr(const void *s, int c, size_t n) {

    if (s == NULL)
    {
        return NULL;
    }
    
    unsigned char *temp1 = (unsigned char *) s;
    temp1 += n-1;

    
    for(size_t i = n; i > 0; i--) {
       

        if (*temp1 == c) {
            void* res = temp1;
            return res;
        }
        temp1--;

    }
    return NULL;

}

