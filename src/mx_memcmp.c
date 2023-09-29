#include "../inc/libmx.h"

int mx_memcmp(const void*s1, const void*s2, size_t n) {

    unsigned char * temp1 = (unsigned char *) s1;
    unsigned char * temp2 = (unsigned char *) s2;

    if (s1 == NULL && s2 == NULL)
    {
        return 0;
    }
    else if (s1 == NULL)
    {
        return 0 - temp2[0];
    }
    else if (s2 == NULL)
    {
        return temp1[0];
    }
    
    
    size_t i = 0;
    for(; i < n; i++) {

        if (temp1[i] == temp2[i]) {
            continue;
        }
        if (temp1[i] > temp2[i]) {
            return temp1[i] - temp2[i];
        }
        if (temp1[i] < temp2[i]) {
            return temp1[i] - temp2[i];
        }

    }
    return 0;
}

