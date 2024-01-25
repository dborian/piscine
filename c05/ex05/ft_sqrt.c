#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < nb/2)
	{
		i++;
		if(i * i == nb)
			return (i);
	}
	return (0);
}
int	main(void)
{
	int nb;

	nb = 6;
	printf("sqrt de %d = %d\n", nb, ft_sqrt(nb));
	return (0);
}
