#include "../inc/libmx.h"


char* mx_replace_substr(const char* str, const char* sub, const char* replace) {
    if (str == NULL || sub == NULL || replace == NULL) {
        return NULL;
    }

    int count = mx_count_substr(str, sub);
    char* result = mx_strnew(mx_strlen(str) - mx_strlen(sub) * count + mx_strlen(replace) * count);

    if (count == 0) {
        result = mx_strncpy(result, str, mx_strlen(str));
        return result;
    }

    int start_index = mx_get_substr_index(str, sub);
    int end_index = start_index + mx_strlen(sub);

    if (start_index != -1)
    {
        result = mx_strncpy(result, str, start_index);
        result = mx_strcat(result, replace);
        result = mx_strcat(result, str + end_index);
    }
    


    for (int i = 0; i < count-1; i++)
    {
        char* temp = mx_strnew(mx_strlen(str) - mx_strlen(sub)*count + mx_strlen(replace)*count);
        
        start_index = mx_get_substr_index(result, sub);
        end_index = start_index + mx_strlen(sub);

        if (start_index != -1)
        {
            temp = mx_strncpy(temp, result, start_index);
            temp = mx_strcat(temp, replace);
            temp = mx_strcat(temp, result + end_index);
        }

        result = mx_strncpy(result, temp, mx_strlen(result));
        free(temp);
    }

    return result;
}





