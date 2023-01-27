#include <unistd.h>

void mx_only_printable(void);

void mx_only_printable(void)
{
    for(int a = 126; a >= 32; a--)
    {
        char c = a;
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}

