#include "../inc/libmx.h"

bool mx_isspace(int c) {
    if (c > 8 && c < 14) {
        return true;
    }

    if (c == 32) {
        return true;
    }
        return false;
}


