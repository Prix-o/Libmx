#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    t_list *t;
	if (*head == NULL || head == NULL) {
        return;
    }

	t = *head;
    *head = t->next;
	free(t);
	
}
