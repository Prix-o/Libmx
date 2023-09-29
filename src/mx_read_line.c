#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if(lineptr == NULL || buf_size == 0 || fd < 0)
        return -2;
    
    size_t len = 0;
    *lineptr = mx_strnew(buf_size);
    char buf[1];
    int bytes = 0;

    while(true) {
        bytes = read(fd, buf, 1);

        if(bytes < 0) {
            free(*lineptr);
            return -2;
        }
        else if (bytes == 0){
            if (len == 0) {
                free(*lineptr);
                return -1;
            }
            else {
                (*lineptr)[len] = '\0'; 
                return len; 
            }
        }
        else {
            if(buf[0] == delim) {
                (*lineptr)[len] = '\0'; 
                return len; 
            }
            if(len >= buf_size - 1) {
                free(*lineptr);
                return -2;
            }
            (*lineptr)[len++] = buf[0];
        }
    }
} 



