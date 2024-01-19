#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long l;
	int *tab;
	int i;

	i = 0;
	l = max - min + 1;
	tab = malloc(sizeof(int) * l);
	while(min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return(tab);
}

int	main(void)
{
	int i;
	int *r;
	int min = -2146473620;
	int max = 2146473620;
	r = ft_range(min, max);
	i = 0;
	while(min < max)
	{
		printf("i = %d\t", r[i]);
		i++;
		min++;
	}
	free(r);
	return(0);
}
