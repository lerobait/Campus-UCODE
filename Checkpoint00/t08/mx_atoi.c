int mx_atoi(const char *str);

int mx_atoi(const char *str) {
    int j = 0;
    int r = 0;

    while(str[j] != '\0') {
        if(str[j] >= '0' && str[j] <= '9') {
            r = r * 10 + str[j]  - '0';
        }
        else
            break;
        if(str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
            break;
        j++;
    }
    return r;
}

