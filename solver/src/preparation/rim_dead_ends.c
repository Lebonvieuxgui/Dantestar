/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** rim_dead_ends
*/
#include "solver.h"

static char **check_dead_end_long(char **maze, int index_x)
{
    int nb_walls = 0;

    if (maze[1][index_x] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (maze[0][index_x - 1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (maze[1][index_x + 1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (nb_walls >= 2) {
        maze[0][index_x] = 'D';
    }
    return (maze);
}

static char **check_dead_end_high(char **maze, int index_y)
{
    int nb_walls = 0;

    if (maze[index_y][1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (maze[index_y - 1][0] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (maze[index_y + 1][1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (nb_walls >= 2) {
        maze[index_y][0] = 'D';
    }
    return (maze);
}

char **rim_dead_ends(char **maze, int xmax, int ymax)
{
    int index_y = 1;
    int index_x = 1;

    while (index_x < xmax - 1) {
        check_dead_end_long(maze, index_x);
        index_x = index_x + 1;
    }
    while (index_y < ymax - 1) {
        check_dead_end_high(maze, index_y);
        index_y = index_y + 1;
    }
    return (maze);
}
