SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
#variable contenant le chemin vers mes fichier en .c

OBJS	= ${SRCS:.c=.o}
#variable contenant mes ficher .o ce qui est marquer au dessus veut dire que si un de mes fichier .c a le meme nom que mon fichier .c il va dans cette variable

NAME	= libft.a
#variable contenant le nom de ma lib

CC		= gcc
#variable contenant la commande gcc

CFLAGS	= -Wall -Wextra -Werror
#variable contenant les flags utilisée lors de la compilation

.c.o:
${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes/
#gcc -Wall -Wextra -Werror -c mon_fichier.c -o mon_meme_fichier.o -I includes/
#je compile tous mes fichier dans mon dossier srcs grace a ma variable suite a quoi je leur donne le meme nom que mes fichier .c mais en .o et j'inclue mon/mes header

all:		${NAME}
#commande executer lors d'un make all avec comme target libft.a via la variable creer plus tot
${NAME}:	${OBJS}
#libft.a: tous mes fichier .o creer plus tot
ar rcsv ${NAME} ${OBJS}
#integration de mes fichier .o dans ma lib libft.a
ranlib ${NAME}
#compilation de la lib
clean :
rm -rf ${OBJS}
#commande lancer lors de la commande make clean: sert a supprimmer les fichier temporaire en .o creer plus tot
fclean :	clean
rm  -rf ${NAME}
#commande lancer via la commande make fclean permet de faire un full clean, semblable a clean mais en suprimmant la lib avec

re :		fclean all
#lancer via make re, supprime tous puis recompile tous

.PHONY:		all clean fclean re
#commande lancer via make build elle peut passer outre les regle si un fichier apeller build existe
