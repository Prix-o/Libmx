#include "../inc/libmx.h"

char *mx_itoa(int number) {

   
    long int num = number;
    int neg = 0;
    char* res = mx_strnew(12);
    int arr[10];
    int counter = 0;

    if (number == 0)
    {
        *res = '0';
        *(res + 1) = '\0';
        return res;
    }
    
    if  (number < 0) 
    {
        *res = '-';
        neg = 1;
        num *= -1;
    
    }

    for (int i = 0; num != 0; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
        counter++;
    }
    
    for (int i = 0; i < counter; i++)
    {
        res[i+neg] = arr[counter - i - 1] + 48;

    }
    *(res+counter + neg) = '\0';
    return res;
    

}



