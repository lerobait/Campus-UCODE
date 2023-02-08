#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if(!name || !power || !strength || !count) {
        return NULL;
    }
    t_agent **agents = malloc(16 * count + 1);
    int j = 0;

    while(j < count) {
        agents[j] = mx_create_agent(name[j], power[j], strength[j]);
        j++;
    }
    agents[count] = NULL;

    return NULL;
}

