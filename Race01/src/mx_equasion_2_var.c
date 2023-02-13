#include "header.h"

void mx_equasion_2_var(char* operand1, char* operand2, char *result_str, char* operation, int num1, int num2, int result, int c) {

    if (*operation == '+') {
        if (c == 0) {
            num1 = result - num2;
            if(mx_strlen(operand1) == 1) {
                if (num1 >= 0 && num1 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);         
            }
           
        }
        else if (c == 1) {
            num2 = result - num1;
            if(mx_strlen(operand2) == 1) {
                if (num2 >= 0 && num2 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2))) {
                mx_print_result(num1, num2, result, operation);         
            }

        }
        else if (c == 2) {
            result = num1 + num2;
            if(mx_strlen(result_str) == 1) {
                if (result >= 0 && result <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }          
    }
    if (*operation == '-') {
        if (c == 0) {
            num1 = result + num2;
            if(mx_strlen(operand1) == 1) {
                if (num1 >= 0 && num1 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 1) {
            num2 = num1 - result;
            if(mx_strlen(operand2) == 1) {
                if (num2 >= 0 && num2 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2))) {
                mx_print_result(num1, num2, result, operation);         
            }
        }

        else if (c == 2) {
            result = num1 - num2;
            if(mx_strlen(result_str) == 1) {
                if (result >= 0 && result <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
            
    }
    if (*operation == '*') {
        if (c == 0) {
            num1 = result / num2;
            if(mx_strlen(operand1) == 1) {
                if (num1 >= 0 && num1 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1)) && result % num2 == 0) {
                mx_print_result(num1, num2, result, operation);         
            }
          
        }
        else if (c == 1) {
            num2 = result / num1;
            if(mx_strlen(operand2) == 1) {
                if (num2 >= 0 && num2 <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (num2 >= mx_pow(10, mx_strlen(operand2) - 1) && num2 < mx_pow(10, mx_strlen(operand2)) && result % num2 == 0) {
                mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 2) {
            result = num1 * num2;
            if(mx_strlen(result_str) == 1) {
                if (result >= 0 && result <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
    }

    if (*operation == '/') {
        
        if (c == 0) {
            if (num2 == 0) {
                return;
            }
            num1 = result * num2;
            if(mx_strlen(operand1) == 1) {
                if (num1 >= 0 && num1 <= 9) {  
                    mx_print_result(num1, num2, result, operation);
                    num1++;
                    for(;num1 % num2 != 0; num1++) {
                        mx_print_result(num1, num2, result, operation);
                    }            
                }
            }
            else if (num1 >= mx_pow(10, mx_strlen(operand1) - 1) && num1 < mx_pow(10, mx_strlen(operand1))) {
                mx_print_result(num1, num2, result, operation);
                num1++;
                for(;num1 % num2 != 0; num1++) {
                    mx_print_result(num1, num2, result, operation);
                }     
            }
        }
        else if (c == 1) {
            for(num2 = mx_pow(10, mx_strlen(operand2) - 1); num2 < mx_pow(10, mx_strlen(operand2)); num2++) {
                if(num1 / num2 == result)
                    mx_print_result(num1, num2, result, operation);         
            }
        }
        else if (c == 2) {
            if (num2 == 0) {
                return;
            }
            result = num1 / num2;
            if(mx_strlen(result_str) == 1) {
                if (result >= 0 && result <= 9) {
                    mx_print_result(num1, num2, result, operation);         
                }
            }
            else if (result >= mx_pow(10, mx_strlen(result_str) - 1) && result < mx_pow(10, mx_strlen(result_str))) {
                mx_print_result(num1, num2, result, operation);         
            }   
        }
    }
}
