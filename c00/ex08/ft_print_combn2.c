#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puttab(int *tab, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		ft_putchar(tab[i]+48);
		i++;
	}
	if(tab[0] < 9 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_recurs(int *tab, int n, int j)
{
	ft_puttab(tab, j+1);
	tab[n]++;
	if(tab[n] >= 9-(j-n) && tab[0] < 9-j)
	{
		tab[n] = tab[n-1] + 2;
		ft_recurs(tab, n-1, j);
	}
	else if(tab[n] <= 9-(j-n))
	{
		n = j;
		ft_recurs(tab, n, j);
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[9];

	i = 0;
	while(i < 9)
	{
		tab[i] = i;
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	ft_recurs(tab, n-1, n-1);
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
