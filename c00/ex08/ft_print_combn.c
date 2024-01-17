#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char *str;
	int i;
	int tab[9];
	
	i=0;
	while(i < n)
	{
		tab[i] = i;
		i++;
	}
// A FAIRE EN RECURSIF
}
int	main(void)
{
	ft_print_combn(4);
	return (0);
}
