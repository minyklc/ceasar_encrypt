#include "utils.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int ft_atoi(char *str)
{
    int i;
    int n;
    int sign;

    i = 0;
    n = 0;
    sign = 1;
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - 48);
        i++;
    }
    while(n > 26)
        n = n / 26;
    if (n == 0)
        return(n * sign);
    else
        return(n);
}
