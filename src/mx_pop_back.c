#include "../inc/libmx.h"

void mx_pop_back(t_list**head) {

    if(*head == NULL || head == NULL){
        return;
    }

    t_list **t = head;

    while ((*t)->next != NULL) {
        t = &((*t)->next);
    }

    free(*t);
	*t = NULL;
    
}
