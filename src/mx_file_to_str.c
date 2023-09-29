#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    int fd = open(file, O_RDONLY);
    char buf[1];
    int counter = 0;

    if(fd < 0) {
       return NULL;
    }

    for(;read(fd, buf, 1) != 0;) {
        counter++;
    }

    if(close(fd) == -1) {
        return NULL;
    }

    char *str = mx_strnew(counter);
    fd = open(file, O_RDONLY);
    for(int i = 0; read(fd, buf, 1) != 0; i++) {
        str[i] = buf[0];
    }

    return str;

    if(close(fd) == -1) {
        return NULL;
    }
}

