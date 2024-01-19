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
	char src[] = "kkkkkkkkkkkkkkkkkkkkkk\n";
	char src1[] = "kkkkkkkkkkkkkn";
	char dest1[] = ""; 
	printf("%s", ft_strcpy(dest, src));
	printf("%s", strcpy(dest1, src1));
	return(0);
}
