#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_pogatif(char *str)
{
	int i;
	int p;
	int n;

	i = 0;
	p = 0;
	n = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '+')
			p++;
		else if(str[i] == '-')
			n++;
		i++;
	}
	if(n > p)
		return(1);
	else
		return(0);
}

int	ft_atoi(char *str)
{
	int i;
	int r;

	i = 0;
	r =0;
	while(str[i] != '\0' && r == 0)
	{
		while(str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
		{
			r = r + str[i]-48;
			if(str[i+1] <= '9' && str[i+1] >= '0') 
				r = r * 10;
			i++;
		}
		i++;
	}
	if(r > 2147483646)
		return(0);
	if(ft_pogatif(str) == 1)
		r = r*-1;
	return(r);
}

int 	main(void)
{
	printf("ft_atoi = %d\n", ft_atoi(" 2147483648"));	
	printf("atoi = %d\n\n", atoi(" 2147483648"));	
	printf("ft_atoi = %d\n", ft_atoi(" - 2147483649"));	
	printf("atoi = %d\n", atoi(" - 2147483649"));	
	return(0);
}
