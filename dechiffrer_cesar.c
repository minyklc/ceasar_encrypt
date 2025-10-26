#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

char    *ft_code(char *uncoded)
{
    int i;

    i = 0;
    while(uncoded[i])
    {
        if (uncoded[i] >= 'a' && uncoded[i] <= 'z' || uncoded[i] >= 'A' && uncoded[i] <= 'Z')
        {
            if (uncoded[i] == 'z' || uncoded[i] =='Z')
                uncoded[i] -= 25;
            else
                uncoded[i] += 1;
        }
        i++;
    }
    return(uncoded);
}

int main(int argc, char *argv[])
{
    int i;
    char *coded;

    i = 1;
    if (argc == 2)
    {
        coded = ft_code(argv[1]);
        ft_putstr(coded);
        i++;
        while(i < 26)
        {
            coded = ft_code(coded);
            ft_putstr(coded);
            i++;
        }
    }
    return(0);
}