#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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
	if(n == 1)
		return (-r);
	return (r);
}

int 	main(void)
{
	printf("ft_atoi = %d\n", ft_atoi(" - 649"));
	printf("   atoi = %d\n\n", atoi(" - 649"));
	printf("ft_atoi = %d\n", ft_atoi("-"));
	printf("   atoi = %d\n\n", atoi("-"));
	printf("ft_atoi = %d\n", ft_atoi("-0"));
	printf("   atoi = %d\n\n", atoi("-0"));
	printf("ft_atoi = %d\n", ft_atoi(" -10000000000649"));
	printf("   atoi = %d\n\n", atoi(" -10000000000649"));
	printf("ft_atoi = %d\n", ft_atoi(" -+649"));
	printf("   atoi = %d\n\n", atoi(" -+649"));
	printf("ft_atoi = %d\n", ft_atoi(" +-649"));
	printf("   atoi = %d\n\n", atoi(" +-649"));
	printf("ft_atoi = %d\n", ft_atoi(" - 649"));
	printf("   atoi = %d\n\n", atoi(" - 649"));
	printf("ft_atoi = %d\n", ft_atoi(" -*-*- -2147483648"));
	printf("   atoi = %d\n\n", atoi(" -*-*- -2147483648"));
	printf("ft_atoi = %d\n", ft_atoi(" sfbdbgfyidhfbgdushfhnfuisbgd ++ -2147483648"));
	printf("   atoi = %d\n\n", atoi(" sfbdbgfyidhfbgdushfhnfuisbgd ++ -2147483648"));
	printf("ft_atoi = %d\n", ft_atoi(" gggfggfggfggfggfgggfgfggf++ - 83648"));
	printf("   atoi = %d\n\n", atoi(" gggfggfggfggfggfgggfgfggf++ - 83648"));
	printf("ft_atoi = %d\n", ft_atoi(" -+/*-/*/-/*/-*/*/*-+--2147483648"));
	printf("   atoi = %d\n\n", atoi(" -+/*-/*/-/*/-*/*/*-+--2147483648"));
	printf("ft_atoi = %d\n", ft_atoi(" -21	47483648"));
	printf("   atoi = %d\n\n", atoi(" -21	47483648"));
	printf("ft_atoi = %d\n", ft_atoi(" +83649"));
	printf("   atoi = %d\n\n", atoi(" +83649"));
	return(0);
}
