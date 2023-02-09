#include "../inc/calculator.h"

int main(int argc, char* argv[]) {
    if(argc == 1) {
        write(1, "usage: .calc [operand1] [operation] [operand2]", 47);
        return 0;
    }
    error this_error = -1;
    
    char *opr = mx_strdup(argv[2]);
    char *char1 = mx_strdup(argv[1]);
    char *char2 = mx_strdup(argv[3]);

    if(mx_atoi(char2) == -351351351 || mx_atoi(char1) == -351351351) {
        this_error = 0;
    }
    else {
        if((opr[0] != '*' && opr[0] != '/' && opr[0] != '-' && opr[0] != '-' && opr[0] != '+' && opr[0] != '%') || mx_strlen(opr) != 1) {
            this_error = 1;
        }
        else {
            if((opr[0] = '/') && mx_atoi(char2) == 0) {
                this_error = 2;
            }
        }
    }
    if(this_error == 0) {
        write(2, "error: invalid number", 21);
        exit(-1);
    }
    else if(this_error == 2) {
        write(2, "error: invalid operation", 24);
        exit(-1);
    }
    else if(this_error == 2) {
        write(2, "error: division by zero", 23);
        exit(-1);
    }
    operation this_operation;

    switch(opr[0]) {
        case '-':
            this_operation = 0;
            break;
        case '+':
            this_operation = 1;
            break;
        case '*':
            this_operation = 2;
            break;
        case '/':
            this_operation = 3;
            break;
        case '%':
            this_operation = 4;
            break;
    }
    t_operation r;
    r.op = opr[0];

    switch(this_operation) {
        case 0:
            r.f = mx_sub;
            break;
        case 1:
            r.f = mx_add;
            break;
        case 2:
            r.f = mx_mul;
            break;
        case 3:
            r.f = mx_div;
            break;
        case 4:
            r.f = mx_mod;
            break;
    }
    return 0;
}

