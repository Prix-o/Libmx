#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    if (s1 == NULL) {
        return NULL;
    }    
    size_t len = mx_strlen(s1);
    if (n < len)
    {
        len = n;
    }
    
    char* res = mx_strnew(len);

    mx_strncpy(res, s1, len);
    return res;
}


