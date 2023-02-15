#include "list.h"

void mx_pop_back(t_list **list) {
    if(*list == NULL) {
        free(list);
        return;
    }
    else if ((*list)->next == NULL) {
        free(list);
        return;
    }
    t_list *c = *list;

    while(c->next->next != NULL) {
        c = c->next;
    }
    free(c->next);
    c->next == NULL;
}

