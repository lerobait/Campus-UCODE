#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if(index <= 0) {
        mx_pop_front(list);
    }
    t_list *c = *l;
    int j = 0;

    while(j < index - 1) {
        if(c->next == NULL) {
            mx_pop_back(list);
            return;
        }
        j++;
        c = c->next;
    }
    t_list *t_node = c->next;
    c->next = t_node-> next;
    free(t_node);
}

