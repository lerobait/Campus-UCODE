#include <stdio.h>

void mx_printchar(char c);

void mx_print_alphabet(void);

void mx_print_alphabet(void)
{
    char c;
    for(int a = 0; a < 26; a++)
    {
        if(a % 2 == 0)
        {
            c = a + 65;
        }
        else 
        {
            c = a + 97;
        }
        mx_printchar(c);
    }
    mx_printchar('\n'); 
}
