/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** find_cross
*/
#include "solver.h"

static int count_walls(char **maze, int index_y, int index_x, int nb_walls)
{
    int ymax = my_maze_hight(maze);
    int xmax = my_strlen(maze[0]);

    if (index_y == 0 || index_x == 0) {
        nb_walls = nb_walls + 1;
    }
    if (index_y > 0 && maze[index_y - 1][index_x] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (index_y < ymax - 1 && maze[index_y + 1][index_x] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (index_x > 0 && maze[index_y][index_x - 1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    if (index_x < xmax - 1 && maze[index_y][index_x + 1] == 'X') {
        nb_walls = nb_walls + 1;
    }
    return (nb_walls);
}

static char **check_cross(char **maze, int index_y, int index_x)
{
    int nb_walls = 0;

    if (maze[index_y][index_x] == '*') {
        nb_walls = count_walls(maze, index_y, index_x, nb_walls);
        if (nb_walls == 1) {
            maze[index_y][index_x] = 'C';
        }
        nb_walls = 0;
    }
    return (maze);
}

char **find_cross(char **maze, int ymax, int xmax)
{
    int index_y = 0;
    int index_x = 0;

    while (index_y < ymax) {
        while (index_x < xmax) {
            check_cross(maze, index_y, index_x);
            index_x = index_x + 1;
        }
        index_y = index_y + 1;
        index_x = 0;
    }
    return (maze);
}
