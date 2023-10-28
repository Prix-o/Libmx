#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {

    void *res = NULL;
    
    unsigned char *temp_c = (unsigned char *) little;

    if(big == NULL)
        return NULL;
    if(little == NULL)
        return (void *) big;
    if (big_len <= 0 || little_len <= 0)
    {
        return (void *) big;
    }
    if(big_len < little_len){
        return NULL;
    }
    
    for (size_t j = 0; j < big_len; j++) {
        for(size_t i = 0; i < little_len; i++) {
            temp_c += i;
           
            res = mx_memchr(big, *temp_c, big_len);
            if (res != NULL)
                break;
        }
        if(res == NULL)
            return res;
        if(mx_memcmp(res, little, little_len) == 0) {
            return res;
        }
        continue;
    }
    res = NULL;
    return res;

}

