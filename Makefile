##
## EPITECH PROJECT, 2021
## Global Makefile
## File description:
## generator/solver
##

all:
	make -C ./generator
	make -C ./solver

clean:
	make fclean -C ./generator
	make fclean -C ./solver

fclean: 	clean

re:		fclean all
