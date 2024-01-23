#include <stdio.h>
void	ft_putchar(char c);

void	rush(int y, int x)
{
	int i;
	int j;

	i = 1;
	j=1;
	printf("x = %d\ny = %d\n", x, y);
	while(i <= x)
	{
		while(j <= y)
		{
			if(i == 1)
			{
				if(j == 1 || j == y)
					ft_putchar('A');
				else
					ft_putchar('B');
			}
			else if(i == x)
			{
				if(j == 1 || j == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else
			{
				if(j == 1 || j == y)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			j++;

		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}
