/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** generator
*/
#include "generator.h"

static char **check_maze(char **maze, int const ymax, int const xmax)
{
    maze[ymax - 1][xmax - 1] = '*';
    maze[ymax - 1][xmax - 2] = '*';
    return (maze);
}

char **fill_with_walls(char **maze, int const xmax, int const ymax)
{
    int index_y = 0;
    int index_x = 0;

    while (index_y < ymax) {
        while (index_x < xmax) {
            maze[index_y][index_x] = 'X';
            index_x += 1;
        }
        maze[index_y][index_x] = '\0';
        index_x = 0;
        index_y = index_y + 1;
    }
    return maze;
}

char ** fill_first_lines(char **maze, int const ymax, int const xmax)
{
    int index = 0;

    while (index < xmax) {
        maze[0][index] = '*';
        index += 1;
    }
    maze[0][xmax] = '\0';
    index = 0;
    while (index < ymax) {
        maze[index][0] = '*';
        index += 1;
    }
    return maze;
}

int generator(int const xmax, int const ymax)
{
    char **maze = malloc(sizeof(char *) * ymax + 1);
    int index_y = 0;
    maze[ymax] = NULL;
    maze[xmax] = NULL;

    srand(time(NULL));
    allocate_maze(maze, xmax, ymax);
    fill_with_walls(maze, xmax, ymax);
    fill_first_lines(maze, xmax, ymax);
    index_y = 2;
    even_or_odd(maze, xmax, ymax, index_y);
    if (xmax % 2 == 0) {
        check_maze(maze, ymax, xmax);
    }
    print_maze(maze, xmax, ymax);
    free_map(maze, ymax);
    return (0);
}

void print_maze(char **maze, int const xmax, int const ymax)
{
    int i = 0;

    while (i < (ymax - 1)) {
        write(1, maze[i], xmax);
        write(1, "\n", 1);
        i = i + 1;
    }
    write(1, maze[i],xmax);
}
