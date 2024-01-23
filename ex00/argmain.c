void	rush(int x, int y);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int i;
	int n;
	int r;

	r = 0;
	i = 0;
	n = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			n++;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (n == 1)
		return (-r);
	return (r);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	else
		ft_putchar('\n');
	return (0);
}
