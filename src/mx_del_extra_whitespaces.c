#include "../inc/libmx.h"

char *mx_del_extra_whitespaces(const char *str) {
    if(str == NULL) {
        return NULL;
    }
    char *temp = mx_strtrim(str);
    char *del = mx_strnew(mx_strlen(temp));
    int j = 0;
    for(int i = 0; i < mx_strlen(temp); i++) {
        if (mx_isspace(temp[i]) && mx_isspace(temp[i - 1]))
            continue;
        if (temp[i] != ' ' && mx_isspace(temp[i]) && !mx_isspace(temp[i - 1])) {
            del[j] = ' ';
            j++;
            continue;
        }
        del[j] = temp[i];
        j++;
    }
    char *result = mx_strnew(mx_strlen(del));
    for(int i = 0; i < mx_strlen(del); i++) {
        result[i] = del[i];
    }
    mx_strdel(&temp);
    mx_strdel(&del);
    return result;
}



