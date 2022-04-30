/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** absolute_path
*/
#include "solver.h"

static char **check_path(char **maze, int const xmax, int y)
{
    int index_x = 0;

    while (index_x < xmax) {
        if (maze[y][index_x] == '*') {
            maze[y][index_x] = 'o';
        }
        index_x = index_x + 1;
    }
    return (maze);
}

char **absolute_path(char **maze, int const ymax, int const xmax)
{
    int index_y = 0;

    while (index_y < ymax) {
        check_path(maze, xmax, index_y);
        index_y = index_y + 1;
    }
    return (maze);
}
