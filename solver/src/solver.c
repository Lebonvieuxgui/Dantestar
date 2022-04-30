/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** solver
*/
#include "solver.h"

static char **find_exit(char **maze, int const ymax, int const xmax)
{
    int index_y = 0;

    find_dead_ends(maze, xmax, ymax, index_y);
    find_cross(maze, ymax, xmax);
    fill_dead_ends(maze, ymax, xmax);
    prep_final(maze);
    final_path(maze, ymax, xmax);
    return (maze);
}

int solver(char const *path)
{
    char **maze = get_maze(path);
    int const ymax = my_maze_hight(maze);
    int const xmax = my_strlen(maze[0]);

    find_exit(maze, ymax, xmax);
    return (0);
}
