#include <unistd.h>

void mx_matrix_voice(void);

void mx_matrix_voice(void)
{
    write(1, "\07", 1);
}
