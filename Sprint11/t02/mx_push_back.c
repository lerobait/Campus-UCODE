#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *n_list = mx_create_node(data);
    t_list *p = *list;
    if(*list != NULL) {
        while(p->next) {
            p = p->next;
        }
        p->next = n_list;
    }
    else {
        *list = n_list;
    }
}

