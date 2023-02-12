#include "header.h"

void mx_print_result(int num1, int num2, int result, char* operation) {
    mx_printint(num1);
    if (*operation == '+')
        mx_printstr(" + ");
    else if (*operation == '-')
        mx_printstr(" - ");
    else if (*operation == '*')
        mx_printstr(" * ");
    else if (*operation == '/')
        mx_printstr(" / ");
    mx_printint(num2);
    mx_printstr(" = ");
    mx_printint(result);
    mx_printchar('\n');
}
