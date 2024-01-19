#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b; 
}

int main()
{
	int div = 0;
	int mod = 0;
	ft_div_mod(5, 2, &div, &mod);
	printf("div = %d et mod = %d\n", div, mod);
	return(0);
}
