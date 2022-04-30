/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** fill_end
*/
#include "solver.h"

static int check_cross(char **maze, int index_y, int index_x)
{
    if (maze[index_y + 1][index_x] == 'C') {
        maze[index_y][index_x] = 'f';
        return (0);
    }
    if (maze[index_y - 1][index_x] == 'C') {
        maze[index_y][index_x] = 'f';
        return (0);
    }
    if (maze[index_y][index_x - 1] == 'C') {
        maze[index_y][index_x] = 'f';
        return (0);
    }
    if (maze[index_y][index_x + 1] == 'C') {
        maze[index_y][index_x] = 'f';
        return (0);
    }
    return (1);
}

char **fill_end(char **maze, int index_y, int index_x)
{
    if (check_cross(maze, index_y, index_x) == 0) {
        return (maze);
    }
    if (maze[index_y + 1][index_x] == '*') {
        maze[index_y + 1][index_x] = 'D';
        return (maze);
    }
    if (maze[index_y - 1][index_x] == '*') {
        maze[index_y - 1][index_x] = 'D';
        return (maze);
    }
    if (maze[index_y][index_x - 1] == '*') {
        maze[index_y][index_x - 1] = 'D';
        return (maze);
    }
    if (maze[index_y][index_x + 1] == '*') {
        maze[index_y][index_x + 1] = 'D';
        return (maze);
    }
    return (maze);
}
