compil_libft: srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c
	cc -c $?
	mv *.o srcs

libft: srcs/ft_putchar.o srcs/ft_strlen.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_swap.o
	ar crsv libft.a $?
	ranlib libft.a
