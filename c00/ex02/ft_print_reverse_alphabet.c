#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int a;

	a = 122;
	while (a >= 97)
	{
		ft_putchar(a--);
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
