#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int r;

	r = nb;
	while(power > 1)
	{
		printf("r = %d\np = %d\n", r, power);
		r = r * nb;
		power--;
	}
	return (r);
}
int	main(void)
{
	int power;
	int nb;

	power = 3;
	nb = 3;
	printf("%d^%d = %d\n",nb ,power, ft_iterative_power(nb, power));
	return (0);
}
