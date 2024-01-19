#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_program_name(char *name)
{
	int i;

	i = 0;
	while(name[i] != '\0')
	{
		ft_putchar(name[i]);
		i++;
	}
		ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	ft_print_program_name(argv[0]);
	return(0);
}
