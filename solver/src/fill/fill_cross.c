/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** fill_cross
*/
#include "solver.h"

char **fill_cross(char **maze, int index_y, int index_x)
{
    int nb_fill = 0;

    if (maze[index_y + 1][index_x] == 'f') {
        nb_fill = nb_fill + 1;
    }
    if (maze[index_y - 1][index_x] == 'f') {
        nb_fill = nb_fill + 1;
    }
    if (maze[index_y][index_x - 1] == 'f') {
        nb_fill = nb_fill + 1;
    }
    if (maze[index_y][index_x + 1] == 'f') {
        nb_fill = nb_fill + 1;
    }
    if (nb_fill >= 2) {
        maze[index_y][index_x] = 'D';
    }
    return (maze);
}
