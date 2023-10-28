#include "../inc/libmx.h"

int mx_sqrt(int x){

    if (x <= 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }

    int res = 0;

    float temp = 0;
    float sqrt = 0;

    sqrt = x / 2;
    temp = 0;

    while(sqrt != temp){
      
        temp = sqrt;
        sqrt = ( x/temp + temp) / 2;
    }
    
    res = sqrt;
    if (res - sqrt != 0) {
        return 0;
    } 
    else return res;
}

