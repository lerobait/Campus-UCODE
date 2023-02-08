#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include "agent.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_agent t_agent;

char *mx_strcpy(char *, const char*);

char *mx_strdup(const char *);

int mx_strlen(const char *);

char *mx_strnew(const int);

t_agent *mx_create_agent(char *, int, int);

#endif

