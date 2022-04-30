##
## EPITECH PROJECT, 2021
## giantman
## File description:
## makefile
##

NAME	=	generator

SRC	=	src/main.c					\
		src/lib/my_getnbr.c			\
		src/lib/my_str_isnum.c		\
		src/lib/my_strcmp.c			\
		src/generator.c				\
		src/imperfect_generator.c	\
		src/allocation.c			\
		src/make_a_way.c			\
		src/errors.c

OBJ	=	$(SRC:.c=.o)

CFLAGS 		+= 	-W -Wall -Wextra -Wshadow -Wpedantic -ggdb3

CPPFLAGS	+=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ) include/include
	rm -f *~
	rm -f *#

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	fclean all re clean tests