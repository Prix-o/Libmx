#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    
    int counter = 1;
    if (list == NULL) {
        return 0;
    }
    
    t_list *t = list;
    for(;t->next != NULL;) {
        t = t->next;
        counter++;
    }  
    return counter;
}

