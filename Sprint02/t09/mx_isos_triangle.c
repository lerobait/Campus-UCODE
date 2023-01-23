void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c);

void mx_isos_triangle(unsigned int length, char c) {
    for(unsigned int i = 1; i <= length; i++) {
        for(unsigned int g = 0; g <+ i; g++) {
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}
