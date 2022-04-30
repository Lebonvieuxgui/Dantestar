##
## EPITECH PROJECT, 2021
## giantman
## File description:
## makefile
##

NAME	=	solver

SRC	=	src/main.c	 					\
		src/lib/my_strlen.c				\
		src/solver.c					\
		src/absolute_path.c				\
		src/maze.c						\
		src/preparation/dead_ends.c		\
		src/preparation/find_cross.c	\
		src/fill/fill_dead_ends.c		\
		src/fill/fill_end.c				\
		src/fill/check_end.c			\
		src/fill/fill_fill.c			\
		src/fill/fill_cross.c			\
		src/preparation/rim_dead_ends.c	\
		src/fill/final_path_rim.c		\
		src/fill/final_path.c

OBJ	=	$(SRC:.c=.o)

CFLAGS 		+= 	-W -Wall -Wextra -Wshadow -Wpedantic

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