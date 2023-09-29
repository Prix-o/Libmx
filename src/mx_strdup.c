#include "../inc/libmx.h"

char*mx_strdup(const char*s1) {

    if (s1 == NULL) {
        return NULL;
    }    

    char* res = mx_strnew(mx_strlen(s1));
    if (res == NULL) {
        return NULL;
    }  
    mx_strcpy(res, s1);
    return res;
}




