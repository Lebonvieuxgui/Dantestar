/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** final_path
*/
#include "solver.h"

static char **find_path(char **maze, int i_y, int i_x)
{
    if (maze[i_y][i_x] == 'o') {
        if (maze[i_y + 1][i_x] == '*' || maze[i_y + 1][i_x] == 'C') {
            maze[i_y + 1][i_x] = 'o';
            return (maze);
        }
        if (maze[i_y - 1][i_x] == '*' || maze[i_y - 1][i_x] == 'C') {
            maze[i_y - 1][i_x] = 'o';
            return (maze);
        }
        if (maze[i_y][i_x - 1] == '*' || maze[i_y][i_x - 1] == 'C') {
            maze[i_y][i_x - 1] = 'o';
            return (maze);
        }
        if (maze[i_y][i_x + 1] == '*' || maze[i_y][i_x + 1] == 'C') {
            maze[i_y][i_x + 1] = 'o';
            return (maze);
        }
    }
    return (maze);
}

static int check_final_end(char **maze, int const ymax, int const xmax)
{
    if (maze[ymax - 1][xmax - 1] == 'o') {
        return (0);
    }
    return (1);
}

char **final_path(char **maze, int const ymax, int const xmax)
{
    int index_y = 1;
    int index_x = 1;

    while (index_y < ymax - 1) {
        while (index_x < xmax - 1) {
            check_rim(maze, index_y, index_x);
            find_path(maze, index_y, index_x);
            index_x = index_x + 1;
        }
        index_y = index_y + 1;
        index_x = 0;
    }
    print_maze(maze, ymax, xmax);
    if (check_final_end(maze, ymax, xmax) == 1) {
        final_path(maze, ymax, xmax);
    }
    return (maze);
}

char **prep_final(char **maze)
{
    maze[0][0] = 'o';
    if (maze[0][1] == '*') {
        maze[0][1] = 'o';
    }
    if (maze[1][0] == '*') {
        maze[1][0] = 'o';
    }
    return (maze);
}
