#include <stdio.h>
#include <stdlib.h>

int	ft_test(char *r)
{
	int i;
	char *rr = *r;
	i = 5;
	rr[0] = 's';
	rr[1] = 'a';
	rr[2] = 'l';
	rr[3] = 'u';
	rr[4] = 't';
	*r = rr;
	return(i);
}

int	main(void)
{
	char *r;
	int i;

	r = malloc(sizeof(char) * 5);
	i = ft_test(&r);
	printf("i = %d\nr = %s\n", i, r);
	return(0);
}
