#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a)
{
	write(1,&a,1);
}
void main()
{
	char f = 97;
	ft_putchar(f);
}
