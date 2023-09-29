#include "../inc/libmx.h"

void mx_printint(int n) {

    if (n == 0)
    {
        mx_printchar('0');
        return;
    }
    

    long int num = n;
    int arr[11];
    int counter = 0;
    
    if (num < 0) {
        num *= -1;
        mx_printchar('-');
    } 

    for (int i = 0; num != 0; i++) {
        arr[i] = num % 10;
        num = num/10;
        counter++;
    }
    for (int i = counter - 1; i >= 0; i--) {
        mx_printchar(arr[i] + 48);
    }

}

