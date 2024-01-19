#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_params(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	while(i <= argc-1)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return(0);
}
