#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *n_list = mx_create_node(data);
    if(*list != NULL) {
        n_list->next = *list;
        *list = n_list;
    }
    else {
        *list = n_list;
    }
}

