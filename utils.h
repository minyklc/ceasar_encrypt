#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

void    ft_putstr(char *str);
int 	ft_atoi(char *str);
char    *ft_decode(char *uncoded);
char    *ft_code(int param, char *uncoded);

#endif