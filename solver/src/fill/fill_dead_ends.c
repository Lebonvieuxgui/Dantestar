/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** fill_dead_end
*/
#include "solver.h"

static char **change_path(char **maze, int index_y, int index_x)
{
    if (maze[index_y][index_x] == 'C') {
        fill_cross(maze, index_y, index_x);
    }
    if (maze[index_y][index_x] == 'D') {
        fill_end(maze, index_y, index_x);
    }
    if (maze[index_y][index_x] == 'f') {
        fill_fill(maze, index_y, index_x);
    }
    return (maze);
}

char **fill_dead_ends(char **maze, int const ymax, int const xmax)
{
    int index_y = 1;
    int index_x = 1;

    while (index_y < ymax - 1) {
        while (index_x < xmax - 1) {
            change_path(maze, index_y, index_x);
            index_x = index_x + 1;
        }
        index_y = index_y + 1;
        index_x = 0;
    }
    if (check_end(maze, ymax, xmax) == 0) {
        fill_dead_ends(maze, ymax, xmax);
    }
    return (maze);
}
