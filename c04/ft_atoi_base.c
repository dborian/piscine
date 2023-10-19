#include <stdio.h>
#include <unistd.h>
// c bon
int	ft_find(char *str, char f)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == f)
			c++;	
		i++;
	}
	return(c);
}

// c bon
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

// c bon
int	ft_same(char *str)
{
	int i;
	int b;

	i = 0;
	b =1;
	while(str[i] != '\0')
	{
		while(str[b] != '\0' && str[b] != str[i])
		{
			b++;
			if(i == b)
				b++;
		}
		if(b != ft_strlen(str) || str[i] == '+' || str[i] == '-')
			return(1);
		b = 0;
		i++;
	}
	return(0);
}

// c bon
long	ft_chartoint(char *str)
{
	int i;
	long r;
	int v;

	r =0;
	i = 0;
	v = 0;
	while(str[i] != '\0' && v == 0)
	{
		while(str[i] <= '9' && str[i] >= '0')
		{
			r = r * 10 + (str[i] - 48);
			v++;
			i++;
		}
		i++;
	}
	return(r);
}

int	ft_atoi_base(char *str, char *base)
{
	long r;
	int st; 
	int len;

	r = 0;
	st = ft_chartoint(str);
	len = ft_strlen(base);
	if(ft_strlen(base) > 1)
	{
		if(ft_same(base) == 0)
		{
			while(st >= len)
			{
				r = r + base[st % len] * 10;
				st = st/len
			}
			i++;
			if(r > 2147483646)
				return(0);
			//return un char ?
		}
	}
	return(r);
}
int	main(void)
{
	printf("test de mes fonction : \nft_find : %d \nexpected : 9 \nft_strlen : %d \nexpected : 11 \nft_same valide : %d = 0 \nft_same non-valide %d = 1 \nft_chartoint %ld \nexpected : 0123456789\n", ft_find("azaearatayauaiaoap", 'a'), ft_strlen("azertyuiopq"), ft_same("ab"), ft_same("aa"), ft_chartoint(" sgdgs0123456789sdfse++--"));
	printf("avant\n\n");
	printf("expected 28\n");
	printf("test1 : %d\n\n", ft_atoi_base("  -+-+-40", "0123456789abcdef"));
	printf("expected 1f\n");
	printf("test2 : %d\n\n", ft_atoi_base("  --++--31", "0123456789abcdef"));
	printf("expected 1111\n");
	printf("test3 : %d\n\n", ft_atoi_base(" ++--++15", "01"));
	printf("expected 15\n");
	printf("test4 : %d\n\n", ft_atoi_base("  ++--+15", "0123456789"));
	printf("expected 10000\n");
	printf("test5 : %d\n\n", ft_atoi_base("  --++-16", "01"));
	printf("expected 7fffffff\n");
	printf("test6 : %d\n\n", ft_atoi_base(" -2147483647", "0123456789abcdef"));
	printf("expected 80000000\n");
	printf("test7 : %d\n\n", ft_atoi_base("  +2147483648", "0123456789abcdef"));
	printf("aprés\n"); 
		return(0);
}
