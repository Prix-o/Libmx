#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *a, void *b)) {
    if (cmp == NULL || lst == NULL) return lst;
    t_list *t = lst;
    int count = 0;
    for(;t != NULL;) {
        t = t -> next;
        count++;
    }

    for (int i = 0; i < count; i++) {
        t = lst;
        for (int j = 0; j < count - 1; j++) {
            if (cmp(t -> data, t -> next -> data)) {
                void *data = t -> data; 
                t -> data = t -> next -> data; 
                t -> next -> data = data;     
            }
            t = t -> next;
        }
    }
    return lst;
}

