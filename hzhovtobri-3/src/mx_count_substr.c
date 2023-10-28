#include "../inc/libmx.h"

int mx_count_substr(const char*str, const char*sub) {


    if (str == NULL || sub == NULL)
    {
        return -1;
    }

    if (*sub == '\0'){
        return 0;
    }

    int counter = 0;
    char *temp = NULL;
    temp = mx_strstr(str, sub);
    for(; temp != NULL; counter++) {
        temp = mx_strstr(temp + 1, sub);
    }
    return counter;
}

