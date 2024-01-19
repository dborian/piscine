#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		printf("str[%d]= %c\n", i ,str[i]);
		i++;
	}
	return(i);
}

int ft_str_is_printable(char *str)
{
	int i = 0;
	if(str[i] == '\0')
	{
		return(1);
	}
	while(str[i] != '\0')	
	{

		if(!(str[i] >= ' ' &&  str[i] <= '~'))
		{
			printf("valeur ascii = %d valeur char = %c\n", str[i], str[i]);
			return(0);
		}
		i++;

	}
	return(1);

}	
int	main()
{
	char str[] = "02\n3i6";
	printf("return %d\n", ft_str_is_printable(str));
	return(0);
}

