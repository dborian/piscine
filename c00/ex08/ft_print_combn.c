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
	while(i <= n)
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

int	ft_valid(int *tab, int n)
{
	int i;

	i = n;
	while(tab[i] == 9 - (n - i))
	{
		i--;
	}
	return (i);
}
void	ft_print_combn(int n)
{
	int i;
	int tab[9];
	i = 0;
	while(i < 9)
	{
		tab[i] = i;
		printf("tab[%d] = %d\n",i ,tab[i]);
		i++;
	}
	while(ft_valid(tab, n-1) >= 0)
	{
		i = ft_valid(tab, n-1);
		ft_puttab(tab, n-1);
		if(i == n-1)
		{
			tab[i]++;
		}
		else
		{
			tab[i]++;
			tab[i+1] = tab[i] + 1;
		}
	}
	ft_puttab(tab, n-1);
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
