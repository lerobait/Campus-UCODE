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
    
    
    if(mx_strlen(operation) != 1 || (*operation != '+' && *operation != '-' && *operation != '*' && *operation != '/' && *operation != '?')) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(-1);
    }

    
    mx_valid_operand(operand1, argv[1], 1);
    mx_valid_operand(operand2, argv[3], 1);
    mx_valid_operand(result, argv[4], 2);


    bool flag_1 = false;
    bool flag_2 = false;
    bool flag_result = false;
    int variable_count = 0;
    int num1 = 0;
    int num2 = 0;
    int result_int = 0;


    for(int i = 0; i < mx_strlen(operand1); i++) {         
        if(operand1[0] == '?') {
            flag_1 = true;
        }
    }
    if(flag_1 == true)
        variable_count++;
    else
        num1 = mx_atoi(operand1);

//////////////////////////////
    for(int i = 0; i < mx_strlen(operand2); i++) {
        if(operand2[0] == '?') {
            flag_2 = true;
        }

    }
     if(flag_2 == true)
        variable_count++;
    else
        num2 = mx_atoi(operand2);
    
/////////////////////////////
    for(int i = 0; i < mx_strlen(result); i++) {
        if(result[0] == '?') {
            flag_result = true;
        }

    }
     if(flag_result == true)
        variable_count++;
    else
        result_int = mx_atoi(result);



    if(variable_count == 1) {
        if(flag_1 == true) {
            mx_equasion_1_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 0);
        }
        else if (flag_2 == true) {
            mx_equasion_1_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 1);
        }
        else if (flag_result == true) {
            mx_equasion_1_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 2);
        }
    }
    else if(variable_count == 2) {

        if(flag_1 == true && flag_2 == true) {
            for(num1 = mx_pow(10, mx_strlen(operand1) - 1); num1 < mx_pow(10, mx_strlen(operand1)); num1++) {
                  mx_equasion_2_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 1);
            }
        }
        else if (flag_1 == true && flag_result == true)  {
            for(num1 = mx_pow(10, mx_strlen(operand1) - 1); num1 < mx_pow(10, mx_strlen(operand1)); num1++) {
                mx_equasion_2_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 2);
            }
        }
        else if (flag_2 == true && flag_result == true)  {
            for(num2 = mx_pow(10, mx_strlen(operand1) - 1); num2 < mx_pow(10, mx_strlen(operand1)); num2++) {
                mx_equasion_2_var(operand1, operand2, result, argv, operation, num1, num2, result_int, 2);
            }
        }
    }
}

