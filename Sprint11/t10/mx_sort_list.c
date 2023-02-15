#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if(list == 0) {
        return 0;
    }
    t_list *j;
    t_list *k;
    t_list *r = list;
    list = list->next;
    r->next = NULL;

    while(list->next != NULL) {
        k = list;
        list = list->next;
        if(k->data < r->data) {
            k->next = r;
            r = k;
        }
        else {
            j = r;

            while(j->next != NULL) {
                if(cmp(j->next->data, k->data)) {
                    break;
                }
                j = j->next;
            }
            k->next = j->next;
            j->next = k;
        }
    }
    return r;
}

