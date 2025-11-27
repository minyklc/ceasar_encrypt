#include "utils.h"

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

/* int main(int argc, char *argv[])
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
} */
