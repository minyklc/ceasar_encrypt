#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
    {
        n = n / 26;
    }
    if (n == 0)
        return(n * sign);
    else
        return(n);
}

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

char    *ft_code(int param, char *uncoded)
{
    int i;

    i = 0;
    while(uncoded[i])
    {
        if (uncoded[i] >= 'a' && uncoded[i] <= 'z' || uncoded[i] >= 'A' && uncoded[i] <= 'Z')
        {
            if (uncoded[i] + param >= 'a' && uncoded[i] + param <= 'z' || uncoded[i] + param >= 'A' && uncoded[i] + param <= 'Z')
                uncoded[i] = uncoded[i] + param;
            else
            {
                if (param > 0)
                    uncoded[i] = uncoded[i] - 26 + param;
                else
                    uncoded[i] = uncoded[i] + 26 - param;
            }
        }
        i++;
    }
    return(uncoded);
}

int main(int argc, char *argv[])
{
    int strsize;
    int param;
    char *coded;
    if (argc == 3)
    {
        param = ft_atoi(argv[2]);
        //printf("%d\n", param);
        coded = ft_code(param, argv[1]);
        ft_putstr(coded);
    }
    return(0);
}