#include "../inc/libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    int len = 0;
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }

    if (s1 != NULL) {
        len += mx_strlen(s1);
    }
    else {
        return mx_strdup(s2);
    }
    if (s2 != NULL) {
        len += mx_strlen(s2);
    }
    else {
        return mx_strdup(s1);
    }

    
    char* str = mx_strnew(len);
    if (s1 != NULL)
        str = mx_strcpy(str, s1);
    if (s2 != NULL)
    str = mx_strcat(str, s2);
    return str;
}



