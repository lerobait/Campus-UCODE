#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 3) {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [-p | -s | -n] [file_name]\n");
    }
    if(mx_flags(argv[1])) {
        char *fname = argv[2];
        int f = open(fname, O_RDONLY);

        if(f < 0) {
            mx_printerr("parse_agents: ");
            mx_printerr(fname);
            mx_printerr(": open: No such file or directory\n");
            close(f);
            exit(0);
        }
        char *t = mx_file_to_str(fname);
        char *cpy = mx_strdup(t);
        int n_of_agents = mx_count_agents(cpy);

        t_agent **list_of_agents = malloc(n_of_agents * 16);

        int j = 0;

        while(j < n_of_agents) {
            list_of_agents[j] = malloc(16);
            j++;
        }
        mx_parse(&list_of_agents, t, n_of_agents);
        mx_sort(&list_of_agents, n_of_agents, argv[1][1]);
        mx_answer(list_of_agents, n_of_agents);

        close(f);

        int g = 0;

        while(g < n_of_agents) {
            free(list_of_agents[g]->name);
            list_of_agents[g]->name = NULL;

            free(list_of_agents[g]);
            list_of_agents[g] = NULL;
        }
        free(list_of_agents);
        list_of_agents = NULL;

        free(cpy);
        cpy = NULL;

        free(t);
        t = NULL;
    }
    else {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [-p | -s | -n] [file_name]\n");
    }
    return 0;
}

