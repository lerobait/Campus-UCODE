#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if(name != NULL) {
        t_agent *agent = malloc(16);

        agent->name = mx_strdup(name);
        agent->power = (int)malloc(4);
        agent->strength = (int)malloc(4);

        agent->power = power;
        agent->strength = strength;

        return agent;
    }
    else 
        return NULL;
}

