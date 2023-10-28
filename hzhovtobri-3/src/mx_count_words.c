#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {

    if (str == NULL)
    {
        return -1;
    }

    if (*str == '\0'){
        return 0;
    }

    int counter = 1;
    if (*str == c)
    {
        counter--;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c && str[i-1] == c && i > 0) {
            
            counter++;
            continue;
        }

    }
    return counter;
}



