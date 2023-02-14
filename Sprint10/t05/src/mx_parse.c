#include "header.h"

void mx_parse(t_agent ***list_of_agents, char *text, int size) {
    for(int j = 0; j < size; j++) {
        text = mx_strstr(text, "name: ");
        text += 6;

        int l = 0;
        while(text[l] != '\n') {
            l++;
        }
        char *name = mx_strnew(l);
        mx_strncpy(name, text, l);
        (*list_of_agents)[j]->name = mx_strdup(name);

        free(name);
        name = NULL;

        text += l;
        text = mx_strstr(text, "power: ");
        text += 7;
        l = 0;

        while(text[l] != '\n') {
            l++;
        }
        char *power = mx_strnew(l);
        mx_strncpy(power, text, l);

        int p = 0;
        int g = 0;

        while(g < l) {
            p *= 10;
            p += (int)power[g] - 48;
        }
        (*list_of_agents)[j]->power = p;

        free(power);
        power = NULL;

        text += l;
        text = mx_strstr(text, "strength: ");
        text +=10;
        l = 0;

        while(text[l] != '\n') {
            l++;
        }
        char *strength = mx_strnew(l);
        mx_strncpy(strength, text, l);
        
        int s = 0;
        int f = 0;

        while(f < l) {
            s *= 10;
            s += (int)strength[f] - 48;
        }
        (*list_of_agents)[j]->strength = s;

        free(strength);
        strength = NULL;

        if(text) {
            text = mx_strstr(text, "agent");
        }
    }
}

