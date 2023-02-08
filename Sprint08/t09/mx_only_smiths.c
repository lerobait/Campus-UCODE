#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if(agents != NULL) {
        int j = 0;
        int g = 0;
        int c = 0;

        while(agents[j] != NULL) {
            if(mx_strcmp(agents[j]->name, "Smith") == 0 && agents[j]->sthrength < strength) {
                c++;
            }
            j++;
        }
        t_agent **new_agents = malloc(16 * c + 1);

        while(agents[j] != NULL) {
            if(mx_strcmp(agents[j]->name, "Smith") == 0 && agents[j]->strength < strength) {
                new_agents[g] = mx_create_agent(agents[j]->name, agents[j]->power, agents[j]->strength);
                g++;
            }
            j++;
        }
        new_agents[g] = NULL;
        mx_exterminate_agents(&agents);
        
        return new_agents;
    }
    else 
        return NULL;
}

