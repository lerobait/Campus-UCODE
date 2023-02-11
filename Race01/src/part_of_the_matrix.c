#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        exit(-1);
    }
    char *operand1 = mx_strtrim(argv[1]);
    char *operation = mx_strtrim(argv[2]);
    char *operand2 = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);
    
    int j = 0;
    
    while(j < mx_strlen(operand1)) {
        if (j == 0 && operand1[j] == '-') {
            continue;
        }
        else if(!mx_isdigit(operand1[j]) && operand1[j] != '?') {
            mx_printerr("Invalid operation: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            exit(-1);
        }
        j++;
    }
    if(mx_strlen(operand1) <= 0) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        exit(-1);
    }
    else if(mx_strlen(operation) != 1 || *operation != '+' && *operation != '-' && *operation != '*' && *operation != '/' && *operation != '?') {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(-1);
    }
    int g = 0;
    
    while(g < mx_strlen(operand2)) {
        if (g == 0 && operand1[g] == '-') {
            continue;
        }
        else if(!mx_isdigit(operand2[g]) && operand2[g] != '?') {
            mx_printerr("Invalid operation: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            exit(-1);
        }
        g++;
    }
    if(mx_strlen(operand2) <= 0) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        exit(-1);
    }
    int f = 0;
    
    while(f < mx_strlen(result)) {
        if (f == 0 && result[f] == '-') {
            continue;
        }
        else if(!mx_isdigit(result[f]) && result[f] != '?') {
            mx_printerr("Invalid operation: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            exit(-1);
        }
        f++;
    }
    if(mx_strlen(result) <= 0) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        exit(-1);
    }
    int a = mx_atoi(operand1);
    int b = mx_atoi(operand2);
    int c = mx_atoi(result);

    if(*operation == '+') {
        if(a + b == c) {
            mx_printint(a);
            mx_printstr(" + ");
            mx_printint(b);
            mx_printstr(" = ");
            mx_printint(c);
            mx_printchar('\n');
        }
    }
    else if(*operation == '-') {
        if(a - b == c) {
            mx_printint(a);
            mx_printstr(" - ");
            mx_printint(b);
            mx_printstr(" = ");
            mx_printint(c);
            mx_printchar('\n');
        }
    }
    else if(*operation == '*') {
        if(a * b == c) {
            mx_printint(a);
            mx_printstr(" * ");
            mx_printint(b);
            mx_printstr(" = ");
            mx_printint(c);
            mx_printchar('\n');
        }
    }
    else if(*operation == '/') {
        if(a / b == c) {
            mx_printint(a);
            mx_printstr(" / ");
            mx_printint(b);
            mx_printstr(" = ");
            mx_printint(c);
            mx_printchar('\n');
        }
    }               
}

