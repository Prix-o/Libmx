#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    char *res = NULL;
    if(haystack == NULL)
        return NULL;
    if(haystack == NULL || *haystack == '\0')
        return (char*)haystack;
    for (int j = 0; j < mx_strlen(haystack); j++) {
        for(int i = 0; i < mx_strlen(needle); i++) {
            res = mx_strchr(haystack, needle[i]);
            if (res != NULL)
                break;
        }
        if(res == NULL)
            return (char*)res;
        if(mx_strncmp(res, needle, mx_strlen(needle)) == 0) {
            return (char*)res;
        }
        continue;
    }
    res = NULL;
    return (char*) res;
}




