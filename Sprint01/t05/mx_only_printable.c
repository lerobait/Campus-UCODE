#include <stdio.h>

void mx_printchar(char c);

void mx_only_printable(void);

void mx_only_printable(void)
{
    for(int a = 127; a >= 32; a--)
    {
        char c = a;
        mx_printchar(c);
    }
    mx_printchar('\n');
}
