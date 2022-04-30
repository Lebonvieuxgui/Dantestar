/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** dead_ends
*/
#include "solver.h"

static char **check_dead_end(char **maze, int const xmax, int i_y, int i)
{
    if (maze[i_y][i] == '*') {
        if (maze[i_y + 1][i] == 'X' && maze[i_y][i + 1] == 'X'
        && maze[i_y][i - 1] == 'X')
            maze[i_y][i] = 'D';
        if (i_y > 0 && maze[i_y - 1][i] == 'X' && maze[i_y][i + 1] == 'X'
        && maze[i_y][i - 1] == 'X')
            maze[i_y][i] = 'D';
        if (i < xmax - 1 && i_y > 0
        && maze[i_y - 1][i] == 'X' && maze[i_y + 1][i] == 'X'
        && maze[i_y][i + 1] == 'X')
            maze[i_y][i] = 'D';
        if (i > 0 && i_y > 0
        && maze[i_y - 1][i] == 'X' && maze[i_y + 1][i] == 'X'
        && maze[i_y][i - 1] == 'X')
            maze[i_y][i] = 'D';
    }
    return (maze);
}

char **find_dead_ends(char **maze, int xmax, int ymax, int index_y)
{
    int i = 0;

    while (index_y < ymax - 1) {
        while (i < xmax) {
            check_dead_end(maze, xmax, index_y, i);
            i = i + 1;
        }
        i = 0;
        index_y = index_y + 1;
    }
    rim_dead_ends(maze, xmax, ymax);
    return (maze);
}
