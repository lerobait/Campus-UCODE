#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n"); //проверка на присутствие 5-ти аргументов;
        exit(-1);
    }
    char *operand1 = mx_strtrim(argv[1]); //избавление от лишних пробелов
    char *operation = mx_strtrim(argv[2]);
    char *operand2 = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);
}

