#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (lineptr == NULL || fd < 0 || buf_size == 0) {
        return -2;
    }

    ssize_t is_read = 0;
    size_t bytes = 0;
    char *buf = (char *)malloc(buf_size);

    if (buf == NULL) {
        return -2;
    }

    while (is_read >= 0) {
        char c;
        is_read = read(fd, &c, 1);

        if (c == delim || is_read == 0) {
            break;
        }

        if (bytes < buf_size - 1) {
            buf[bytes] = c;
            bytes++;
        } else {
            size_t new_size = buf_size * 2;
            char *new_buf = (char *)mx_realloc(buf, new_size);

            if (new_buf == NULL) {
                free(buf);
                return -2;
            }

            buf = new_buf;
            buf_size = new_size;
            buf[bytes] = c;
            bytes++;
        }
    }

    if (is_read < 0) {
        free(buf);
        return -2;
    }

    buf[bytes] = '\0';
    *lineptr = buf;

    if (is_read == 0 && bytes == 0) {
        free(buf);
        return -1;
    }

    return bytes;
}



