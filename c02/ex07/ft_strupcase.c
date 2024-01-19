#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		str[i] = str[i]-32;
		i++;
	}
	return(str);
}
int	main()
{
	char str[] = "salut";
	printf("str = %s\n", str);
	printf("str = %s\n",ft_strupcase(str));
	return(0);
}
