#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {

    if(str == NULL) {
        return NULL;
    }

    char *trim = mx_strtrim(str);
    int len = mx_strlen(trim);
    char *new = mx_strnew(len);
    int j = 0;

    for(int i = 0; i < len; i++) {

        if (mx_isspace(trim[i]) && mx_isspace(trim[i - 1]))
        {
            continue;
        }
        if (trim[i] != ' ' && mx_isspace(trim[i]) && !mx_isspace(trim[i - 1])) {
            new[j] = ' ';
            j++;
            continue;
        }
        new[j] = trim[i];
        j++;
        
    }

    char *result = mx_strdup(new);
    mx_strdel(&trim);
    mx_strdel(&new);

    return result;
}



