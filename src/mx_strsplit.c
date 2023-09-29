#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {

    if (s == NULL)
    {
        return NULL;
    }
    

    int words = mx_count_words(s, c);
    if (words < 0)
    {
        return NULL;
    }
    
    
    char **words_arr = (char **)malloc(sizeof(char *) * (words));
    if (words == 0)
    {
        words_arr[0] = NULL;
        return words_arr;
    }
    int start = 0;
    int end = mx_strlen(s);
    int i = 0;
    for (int k = 0; k < words; k++)
    {
        for (; s[i] != '\0'; i++) {
            if (s[i] != c && s[i-1] == c) {
                start = i;
            }

            if (s[i] == c && s[i-1] != c && i != 0) {
                end = i;
                i++;
                break;
            }
            if (s[i] != c && s[i+1] == '\0') {
                end = i+1;
                i++;
                break;
            }
            
        }
        words_arr[k] = mx_strndup((s+start), end-start);
    }
    words_arr[words] = NULL;
    return words_arr;

}



