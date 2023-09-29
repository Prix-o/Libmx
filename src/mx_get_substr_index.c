#include "../inc/libmx.h"

int mx_get_substr_index(const char*str, const char*sub) {
    char *res = NULL;
    int ret = 0;
    if(str == NULL || sub == NULL){
        return -2;
    }
    
    int i = 0;
    for (int j = 0; j < mx_strlen(str); j++) {
        for(; i < mx_strlen(str); i++) {
            res = mx_strchr(str+j, sub[0]);
            
            if (res != NULL) {
                ret = mx_get_char_index(str+j, res[0])+j;
                i++;
                break;
            }
                
        }
        if(res == NULL)
            return -1;
        if(mx_strncmp(res, sub, mx_strlen(sub)) == 0) {
            return ret;
        }
        continue;
    }
    res = NULL;
    return -1;
    
}


