#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *new_node = mx_create_node(data);

    if (*list == NULL) {
        *list = new_node;
    }
    
    t_list *t = *list;
    for(;t->next != NULL;) {
        t = t->next;
    }  
    t->next = new_node;
}


