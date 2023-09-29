#include "../inc/libmx.h"

int mx_hex_digit_to_nbr(char hex) {

    if (hex > 47 && hex < 58)
    {
        return hex - 48;
    }
    else if (hex > 64 && hex < 71)
    {
        return hex - 55;
    }
    else if (hex > 96 && hex < 103)
    {
        return hex - 87;
    }
    else return 0;
    

}


