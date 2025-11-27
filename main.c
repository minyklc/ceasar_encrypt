#include "utils.h"

int	main(int argc, char *argv[])
{
	int strsize;
    int param;
    char *coded;
	int i;

	i = 1;
	if (argc == 2)
	{
		coded = ft_decode(argv[1]);
		ft_putstr(coded);
		i++;
		while(i < 26)
		{
			coded = ft_decode(coded);
			ft_putstr(coded);
			i++;
		}
	}
    else if (argc == 3)
    {
        param = ft_atoi(argv[2]);
        coded = ft_code(param, argv[1]);
        ft_putstr(coded);
    }
	else
		ft_putstr("caeser encoder : [text] [key] \ncaeser decoder : [text]");
	return (0);
}
