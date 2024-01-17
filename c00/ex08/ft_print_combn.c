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

	i = n;
	while(i >= 0)
	{
		ft_putchar(tab[i]+48);
		i--;
	}
	if(tab[0] < 9 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[9];
	int j;

	n = n-1;
	j = n;
	i = 0;
	while(i < 9)
	{
		tab[i] = i;
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	i = 0;
	while(tab[0] < 9 - n)
	{
		ft_puttab(tab, n);
		tab[n]++;
		if(tab[n] >= 9-(j-n))
		{
			tab[n] = tab[n+1];
			n--;
		}
		else
			n = j;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
