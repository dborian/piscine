#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nb = 0;
	printf("nb = %d\n", nb);
	ft_ft(&nb);
	printf("nb = %d\n", nb);
	return(0);
}
