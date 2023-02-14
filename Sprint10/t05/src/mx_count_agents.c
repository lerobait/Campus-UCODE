#include "header.h"

int mx_count_agents(char *cpy) {
    int n_of_agents = 0;

    while(cpy) {
        char *t = mx_strnew(5);
        mx_strncpy(t, cpy, 5);
        
        if(mx_strcmp(t, "agent") == 0) {
            n_of_agents++;
        }
        free(t);
        t = NULL;

        cpy +=5;
        cpy = mx_strstr(cpy, "agent");
    }
    return n_of_agents;
}

