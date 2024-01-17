#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int n;

	n = '0';
	while(n <= '9')
		ft_putchar(n++);
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
