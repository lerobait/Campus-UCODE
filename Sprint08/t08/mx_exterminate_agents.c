#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    int j = 0;

    while((*agents)[j] != NULL) {
        free((*agents)[j]->name);
        (*agents)[j]->name = NULL;
        j++;
    }
    free(*agents);
    *agents = NULL;
}

