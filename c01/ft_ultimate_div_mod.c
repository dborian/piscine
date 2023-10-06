#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int c = *a;
	*a = *a / *b;
	*b = c % *b;
}
int main()
{
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d\n",a ,b);
	return(0);
}
