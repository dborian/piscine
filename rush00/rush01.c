void	ft_putchar(char c);

void	line(int i, int x, int j, int y)
{
	while(i <= x)
	{
		if(j == 0)
		{
			if(i == 1)
				ft_putchar('/');
			else if(i == x)
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
		else if(j == y)
		{
			if(i == 1)
				ft_putchar('\\');
			else if(i == x)
				ft_putchar('/');
			else
				ft_putchar('*');
		}
		i++;
	}
	ft_putchar('\n');
}

void	end_line(int x, int i)
{

}
void	middle(int x, int i)
{
	while(i <= x)
	{
		if(i == 1 || i == x)
			ft_putchar('*');
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
		line(i, x, j, y);
		while(j < y -2)
		{
			middle(x, i);
			j++;
		}
		if(y >= 2)
		{
			line(i, x, j, y);
		}
	}
	else
		ft_putchar('\n');
}
