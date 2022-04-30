/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** my_strlen
*/
#include "solver.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int my_maze_hight(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        i = i + 1;
    }
    return (i);
}
