#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return(dest);

}

int	main()
{
	char dest[] = ""; 
	char src[] = "yep\n";
	char dest1[] = ""; 
	printf("ft_strcpy = %s", ft_strcpy(dest, src));
	printf("strcpy = %s", strcpy(dest1, src));
	return(0);
}
