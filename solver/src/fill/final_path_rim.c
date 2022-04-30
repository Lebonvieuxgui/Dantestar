/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** final_path_rim
*/
#include "solver.h"

static char **fill_path_long(char **maze, int index_x)
{
    if (maze[0][index_x] == 'o') {
        if (maze[0][index_x + 1] == '*' || maze[0][index_x + 1] == 'C') {
            maze[0][index_x + 1] = 'o';
        }
    }
    return (maze);
}

static char **fill_path_high(char **maze, int index_y)
{
    if (maze[index_y][0] == 'o') {
        if (maze[index_y + 1][0] == '*' || maze[index_y + 1][0] == 'C') {
            maze[index_y + 1][0] = 'o';
        }
    }
    return (maze);
}

char **check_rim(char **maze, int const ymax, int const xmax)
{
    int index_y = 0;
    int index_x = 0;

    while (index_x < xmax - 1) {
        if (maze[0][index_x] == 'o') {
            fill_path_long(maze, index_x);
        }
        index_x = index_x + 1;
    }
    while (index_y < ymax - 1) {
        if (maze[index_y][0] == 'o') {
            fill_path_high(maze, index_x);
        }
        index_y = index_y + 1;
    }
    return (maze);
}
