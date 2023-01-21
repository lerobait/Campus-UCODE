int mx_strlen(const char *s);

int mx_strlen(const char *s)
{
    int a = 0;
    while(*s != 0)
    {
        s++;
        a++;
    }
    return a;
}
