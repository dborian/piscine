#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	while(nb%i != 0)
		i++;
	if(i == nb)
		return (1);
	else
		return (0);
}
int	main(void)
{
	int nb;

	nb = 4;
	printf("%d = %d\n", nb, ft_is_prime(nb));
	return (0);
}
