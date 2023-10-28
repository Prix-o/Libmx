
#include "../inc/libmx.h"

static int mx_find_file_len(const char *file) {

    int fd = open(file, O_RDONLY);

    if (fd < 0)
    {
        return -1;
    }

    char c;
    int bytes = read(fd, &c, 1);
    int len = 0;

    while(bytes) {
        bytes = read(fd, &c, 1);
        if(bytes < 0)
        {
            return -1;
        }
        len++;
    }

    if (len == 0 ) 
    {
        return -1;
    }
    
    if (close(fd) < 0) 
    {
        return -1;
    }

    return len;
}

char *mx_file_to_str(const char *file) {
    if (file == NULL) 
    {
        return NULL;
    }

    int len = mx_find_file_len(file);

    if (len < 0 ) 
    {
        return NULL;
    }

    char c;
    int bytes = 0;
    int fd = open (file, O_RDONLY);
    if (fd < 0)
    {
        return NULL;
    }

    char *s = mx_strnew(len);
    for(int i = 0; i < len; i++) 
    {
        bytes = read(fd, &c, 1);
        if(bytes < 0)
        {
            return NULL;
        }
        s[i] = c;
    }
    if (close(fd) < 0) 
    {
        return NULL;
    }

    return s;
}



