#include "header.h"

void mx_valid_operand(char* operand, char* argv, int type) {
int f = 0;
    
    while(f < mx_strlen(operand)) {
        if (f == 0 && operand[f] == '-') {
            continue;
        }
        else if((!mx_isdigit((operand[f])) && operand[f] != '?') || (mx_strlen(operand) <= 0)) {
            if (type == 1)
                mx_printerr("Invalid operand: ");
            else if (type == 2)
                mx_printerr("Invalid result: ");
            mx_printerr(argv);
            mx_printerr("\n");
            exit(-1);
        }
        f++;
    }

}
