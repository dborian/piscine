compil_libft: 
	gcc -c ft_putchar.c ft_strlen.c ft_putstr.c ft_strcmp.c ft_swap.c

libft:
	ar crsv libft.a ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o
	ranlib libft.a

test: test.c
	gcc test.c libft.a
