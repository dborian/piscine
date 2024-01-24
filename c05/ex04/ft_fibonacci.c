#include <stdio.h>

int	ft_fibonacci(int index)
{
	int i;
	
	i = index;
	if(index > )
	{	
		index = findex + ft_fibonacci(index-1);
		printf("index(%d) + ft_fibonacci(index-1(%d))(%d) = %d\n", i, i-1, index-i, index);
	}
	return(index);
}

int	main(void)
{
	int i;

	i = 3;
	printf("%d nombre = %d\n", i, ft_fibonacci(i));
	return (0);
}






/*
   main

   i = 3
   "i(3)nombre=ft_fibonacci(i(3))
   i(3) > 0
   "index= i(3)"
   index(3)=index(3)+ ft_fibonacci(i(3))
   i(2) > 0
   "index= i(2)"
   index(2)=index(2)+ ft_fibonacci(i(2))
   i(1) > 0
   "index = i(1)"
   index(1)=index(1)+ ft_fibonacci(i(1))
   i(0) > 0
   return(i(0))
   "index2 = i(1)"
   return(i(1))
   "index2 = i(3)
   return(i(3)
   "index2 = i(6)"	   
   return(i(6))
   main
   return (0);
   }
 */
