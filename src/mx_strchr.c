#include "../inc/libmx.h"

char* mx_strchr(const char*s, int c) {
   
    for (;*s != '\0';) {
        if (*s != c) {
            s++;
        }
        else {
            return (char*) s;
        }
    }
    return NULL;

}

