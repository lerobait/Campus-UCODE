#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *c = NULL;
    if(*list == NULL) {
        return;
    }
    c = (*list)->next;
    free(*list);
    *list = c;
}

