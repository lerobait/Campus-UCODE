#ifndef ONLY_SMITHS_H
#define ONLY_SMITHS_H

#include "agent.h"
#include <stdlib.h>

typedef struct s_agent t_agent;

t_agent *mx_create_agent(char *name, int power, int strength);

void mx_exterminate_agents(t_agent ***);

int mx_strcmp(const char *, const char *);

char *mx_strcpy(char *, const char*);

char *mx_strdup(const char *);

int mx_strlen(const char *);

char *mx_strnew(const int);

t_agent **mx_only_smiths(t_agent **agents, int strength);

#endif 

