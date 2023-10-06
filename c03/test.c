#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char b[] = "saglut";
	char c[] = "salu";
	printf("b est plus grd que c alors : %d", strcmp(c, b));
	return(0);
}
