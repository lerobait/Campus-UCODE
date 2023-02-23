#include "list.h"

int mx_list_size(t_list *list) {
    if(list == NULL) {
        return 0;
    }
    int s = 0;
    t_list *p = list;

    while(p) {
        p = p->next;
        s++;
    }
    return s;
}

