#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {

    if(haystack == NULL || *haystack == '\0')
    {
        return (char*)haystack;
    }
    
    if (needle == NULL)
    {
        return NULL;
    }
    

    int len_hay = mx_strlen(haystack);
    int len_needle = mx_strlen(needle);

    for (int i = 0; i < len_hay; i++)
    {
        if (mx_strncmp(haystack + i, needle, len_needle) == 0)
        {
            return (char *) (haystack + i);
        }
        
    }
    return NULL;


}





