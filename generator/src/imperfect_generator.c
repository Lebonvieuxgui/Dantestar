/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** imperfect_generator
*/

#include "generator.h"

static char **check_maze_imp(char **maze, int ymax, int xmax, int index_y)
{
    int index_x = 0;

    while (index_x <= xmax - 1) {
        if (maze[index_y][index_x] == 'X' && ((rand() % 4) == 0)) {
            maze[index_y][index_x] = '*';
        }
        index_x += 1;
    }
    index_x = 0;
    maze[ymax - 1][xmax - 1] = '*';
    maze[ymax - 1][xmax - 2] = '*';
    return (maze);
}

int imperfect_generator(int const xmax, int const ymax)
{
    char **maze = malloc(sizeof(char *) * ymax + 1);
    int index_y = 0;

    srand(time(NULL));
    maze[ymax] = NULL;
    allocate_maze(maze, xmax, ymax);
    fill_with_walls(maze, xmax, ymax);
    fill_first_lines(maze, xmax, ymax);
    index_y = 2;
    even_or_odd(maze, xmax, ymax, index_y);
    while (index_y <= ymax - 1) {
        check_maze_imp(maze, ymax, xmax, index_y);
        index_y += 1;
    }
    print_maze(maze, xmax, ymax);
    free_map(maze, ymax);
    return (0);
}
