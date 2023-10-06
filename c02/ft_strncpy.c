#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t i = 0;
	while(str[i] != '\0')
	{
		printf("str[%ld]= %c\n", i ,str[i]);
		i++;
	}
return(i);
}

char	*ft_strncpy (char *dest, char *src, size_t n)
{
	size_t i = 0;
	size_t len = ft_strlen(src);
	if(len < n)
	{
		n = len;
	}

	while(i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
int	main()
{
	char src[] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	char dest[] = "";
	size_t n = 5;
	printf("%s\n", ft_strncpy(dest, src, n));
	return(0);
}
