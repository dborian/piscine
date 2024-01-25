void	ft_putchar(char c);

void	line(int i, int x)
{
	while(i <= x)
	{
		if(i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	middle(int x, int i)
{
	while(i <= x)
	{
		if(i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if(x != 0 && y != 0)
	{
		line(i, x);
		while(j < y - 2)
		{
			middle(x, i);
			j++;
		}
		if(y >= 2)
			line(i, x);
	}
	else
		ft_putchar('\n');
}
