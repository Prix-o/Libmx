#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    if (s1 == NULL) {
        return NULL;
    }    

    char* res = mx_strnew(mx_strlen(s1));

    mx_strncpy(res, s1, n);
    return res;
}


