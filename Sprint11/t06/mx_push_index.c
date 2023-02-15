#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if(index <= 0) {
        mx_push_front(list, data);
    }
    int j = 0;
    t_list *c = *list;

    while(j < index - 1) {
        if(c->next == NULL) {
            mx_push_back(list, data);
            return;
        }
        c = c->next;
        j++;
    }
    t_list *n_node = mx_create_node(data);
    n_node->next = c->next;
    c->next = n_node;
}

