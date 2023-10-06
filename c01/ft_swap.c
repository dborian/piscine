#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}	
int main()
{
	int a = 80;
	int b = 50;
	ft_swap(&a, &b);
	printf("a et b = %d %d\n", a, b);
	return(0);
}
