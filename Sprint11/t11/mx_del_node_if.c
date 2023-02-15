#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *j;
    t_list *jj = *list;

    if((j = (*list)->next)) {
        while(j->next) {
            if(cmp(j->data, del_data)) {
                jj->next = j->next;
                free(j);
                j = jj->next;
            }
            else {
                jj = jj->next;
                j = j->next;
            }
        }
        if(cmp(j->data, del_data)) {
            jj->next = NULL;
            free(j);
        }
        j = *list;
        if(cmp(j->data, del_data)) {
            (*list) = (*list)->next;
            free(j);
        }
    }
    else {
        if(cmp(jj->data, del_data)) {
            free(*list);
        } 
    }
}

