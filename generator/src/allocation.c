/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** allocation
*/
#include "generator.h"

char **free_map(char **maze, int ymax)
{
    int i = 0;

    while (i < ymax) {
        free(maze[i]);
        i = i + 1;
    }
    free(maze);
    return (maze);
}

char **allocate_maze(char **maze, int const xmax, int const ymax)
{
    int i = 0;

    while (i < ymax) {
        maze[i] = malloc(sizeof(char) * xmax + 1);
        i = i + 1;
    }
    return maze;
}
