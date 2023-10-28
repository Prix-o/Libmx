#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char o = 0;
    if (nbr == 0)
    {
        o = 1;
    }

    char hex[20];
    int counter = 0;
    for(int i = 0; nbr > 0; i++) {
        if(nbr % 16 <= 9) {
            (hex[i] = ((nbr % 16) + 48));
        } 
        else {
            (hex[i] = ((nbr % 16) + 87));
        }
        counter++;
        nbr /= 16;
    }
    char *res = mx_strnew(counter);
    if (o == 1)
    {
       *res = '0';
       return res;
    }
    
    for(int i = 0; counter != 0; i++) {
        res[i] = hex[counter - 1];
        counter--;
    }

    return res;
}



