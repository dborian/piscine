#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long l;
	int *tab;
	int i;

	l = max - min + 1;
	tab = malloc(sizeof(int) * l);
	i = 0;
	while(min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return(tab);
}
int	main(void)
{
	int min;
	int max;
	int i;
	int *tab;

	min = -27;
	max = 27;
	i = 0;
	tab = ft_range(min, max);
	while(min <= max)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
		min++;
	}
	free(tab);
	return(0);
}
