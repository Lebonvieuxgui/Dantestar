/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** fill_fill
*/
#include "solver.h"

char **fill_fill(char **maze, int index_y, int index_x)
{
    if (maze[index_y + 1][index_x] == 'D') {
        maze[index_y + 1][index_x] = 'f';
        return (maze);
    }
    if (maze[index_y - 1][index_x] == 'D') {
        maze[index_y - 1][index_x] = 'f';
        return (maze);
    }
    if (maze[index_y][index_x - 1] == 'D') {
        maze[index_y][index_x - 1] = 'f';
        return (maze);
    }
    if (maze[index_y][index_x + 1] == 'D') {
        maze[index_y][index_x + 1] = 'f';
        return (maze);
    }
    return (maze);
}
