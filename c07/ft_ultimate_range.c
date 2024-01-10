#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int l;
	int *rr;
	int i;

	i = 0;
	l = max - min;
	rr = malloc(sizeof(int) * l);
	if(min >= max)
	{
		rr = NULL;
		return(0);
	}
	if(rr == NULL)
		return(-1);
	while(min < max)
	{
		rr[i] = min;
		i++;
		min++;
	}
	*range = rr;
	return(l);
	}
int	main(void)
{
	int min;
	int max;
	int *tab;
	int i;

	i = 0;
	min = -16000;
	max = 16000;
	printf("range = %d\n", ft_ultimate_range(&tab, min, max));
	if(min < max)
	{
	while(min < max)
	{
		printf("%d\n", tab[i]);	
		i++;
		min++;
	}
		free(tab);
	}
	return(0);
}
