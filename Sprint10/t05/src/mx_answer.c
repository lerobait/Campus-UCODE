#include "header.h"

void mx_answer(t_agent **list_of_agents, int size) {
    for (int j = 0; j < size; j++) {
        mx_printstr("agent: ");
        mx_printstr(list_of_agents[j]->name);
        mx_printstr(", power: ");
        mx_printint(list_of_agents[j]->power);
        mx_printstr(", strength: ");
        mx_printint(list_of_agents[j]->strength);
        mx_printchar('\n');
    }
}

