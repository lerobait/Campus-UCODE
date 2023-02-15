#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *j;

    while(*list) {
        j = NULL;
        if(list) {
            j = (*list)->next;
            free(*list);
            *list = j;
        }
    }
}

