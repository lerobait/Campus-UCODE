#include "header.h"

void mx_equasion_2_var(char* operand1, char* operand2, char *result_str, char** argv, char* operation, int num1, int num2, int result, int c) {

    if (*operation == '+') {
        if (c == 0) {
            num1 = result - num2;
            if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);         
            }
           
        }
        else if (c == 1) {
            num2 = result - num1;
            if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2))) {
                mx_print_result(num1, num2, result, operation);         
            }

        }
        else if (c == 2) {
            result = num1 + num2;
            if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }          
    }
    if (*operation == '-') {
        if (c == 0) {
            num1 = result + num2;
            if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 1) {
            num2 = num1 - result;
            if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2))) {
                mx_print_result(num1, num2, result, operation);         
            }
        }

        else if (c == 2) {
            result = num1 - num2;
            if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
            
    }
    if (*operation == '*') {
        if (c == 0) {
            num1 = result / num2;
            if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1)) && result % num2 == 0) {
                mx_print_result(num1, num2, result, operation);         
            }
          
        }
        else if (c == 1) {
            num2 = result / num1;
            if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2)) && result % num2 == 0) {
                mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 2) {
            result = num1 * num2;
            if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
    }

    if (*operation == '/') {
        if (num2 == 0) {
            mx_printerr("Invalid operation: ");
                mx_printerr(argv[3]);
                mx_printerr("\n");
                exit(-1);
        }
        if (c == 0) {
            num1 = result * num2;
            if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);     
            }
        }
        else if (c == 1) {
            num2 = num1 / result;
            if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2))) {
                mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 2) {
            result = num1 / num2;
            if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
    }
}
