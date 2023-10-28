#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char*hex) {

    unsigned long result = 0;

    int length = mx_strlen(hex);

    int value = 0;
    
    for (int i = 0; i < length; i++)
    {
        value = mx_hex_digit_to_nbr(hex[i]);
        result += value * mx_pow(16, length - i - 1);
    }

    return result;
    
}

