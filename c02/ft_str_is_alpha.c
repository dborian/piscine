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

int ft_str_is_alpha(char *str)
{
	int i = 0;
	if(str[i] == '\0')
	{
		return(1);
	}
	while(str[i] != '\0')	
	{
		
		if(!(str[i] >= 'a' &&  str[i] <= 'z'))
		{
			printf("valeur ascii = %d valeur char = %c\n", str[i], str[i]);
			return(0);
		}
		if(!(str[i] >= 'A' && str[i] <= 'z'))
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
	char str[] = "afsdqzatfs";
	printf("return %d\n", ft_str_is_alpha(str));
	return(0);
}
