#include <stdio.h>
#include <unistd.h>
void ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
	printf("tab = %d %d %d %d size =%d\n", tab[0], tab[1], tab[2], tab[3], size);
	int i = 0;
	while(size > i)
	{
		ft_swap(&tab[i], &tab[size-1]);

		i++;
		size--;
	}
	printf("tab = %d %d %d %d size =%d\n", tab[0], tab[1], tab[2],tab[3], size);
}

int main()
{
	int s = 4;
	int tab[4];
	tab[0]= 1;
	tab[1]= 2;
	tab[2]= 3;
	tab[3]= 4;
	ft_rev_int_tab(tab, s);
	return(0);
}
