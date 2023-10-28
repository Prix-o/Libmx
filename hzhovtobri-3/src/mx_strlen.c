#include "../inc/libmx.h"

int mx_strlen(const char *s) {
    if (s == NULL)
    {
        return 0;
    }
    
    int length = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        length++;
    }
    return length;
}




