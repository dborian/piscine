#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
void ft_sort_int_tab(int *tab, int size)
{
	int a = 0;
	int i = 0;
	int g = 0;
	int s = size - 1;
	while(i <= s)
	{
		printf("tab[%d]:%d ", i, tab[i]);
		i++;
	}
	printf("\n");
	i = 0;		
	while(a <= s)
	{
		while(i < size)
		{
			if(tab[i] > tab[g])
			{
				g = i;		
			}
			i++;
		}
		ft_swap(&tab[size - 1], &tab[g]);
		i = 0;
		g = 0;
		size--;
		a++;
	}
	while(i <= s)
	{
		printf("tab[%d]:%d ", i, tab[i]);
		i++;
	}
	printf("\n");
	i = 0;		
	
}
int main()
{
	int s = 13;
	int tab[13];
	tab[0] = 0;
	tab[1] = 32;
	tab[2] = 57;
	tab[3] = 1;
	tab[4] = 99;
	tab[5] = 69;
	tab[6] = 48;
	tab[7] = -2147483648;
	tab[8] = 2147483647;
	tab[9] = -0;
	tab[10] = -1;
	tab[11] = 32;
	tab[12] = 57;
	ft_sort_int_tab(tab, s);
	return(0);
}
