/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** check_end
*/
#include "solver.h"

static int check_path(char **maze, int const xmax, int index_y)
{
    int index_x = 1;

    while (index_x < xmax - 1) {
        if (maze[index_y][index_x] == 'C') {
            fill_cross(maze, index_y, index_x);
        }
        if (maze[index_y][index_x] == 'D') {
            return (0);
        }
        index_x = index_x + 1;
    }
    return (1);
}

int check_end(char **maze, int const ymax, int const xmax)
{
    int index_y = 1;

    while (index_y < ymax - 1) {
        if (check_path(maze, xmax, index_y) == 0) {
            return (0);
        }
        index_y = index_y + 1;
    }
    return (1);
}
