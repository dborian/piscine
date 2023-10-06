#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
char	*ft_strcat(char *dest,char *src)
{
	int i;
	int d;

	i = 0;
	d = ft_strlen(dest);
	while(src[i] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
		dest[d] = '\0';
	return(dest);
}	
int	main(void)
{
	char src[20] = "ation";
	char dest[20] = "salut";
	char src1[20] = "ation";
	char dest1[20] = "salut";

	printf("strcat: %s\n", ft_strcat(dest,src));
	printf("strncat: %s\n", strncat(dest1,src1,4));
	return(0);
}
