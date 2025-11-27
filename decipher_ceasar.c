#include "utils.h"

char    *ft_decode(char *uncoded)
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
