#include "../inc/libmx.h"

void mx_pop_back(t_list**head) {

    t_list *t;
    if(*head == NULL || head == NULL){
        return;
    }

    t = *head;

    if (t->next == NULL) {
        free(t);
        *head = NULL;
        return;
    }

    while (t->next->next != NULL) {
        t = t->next;
    }

    free(t->next);
	t->next = NULL;
    
}
