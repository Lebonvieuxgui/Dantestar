/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** make_a_way
*/

#include "generator.h"

char **even_or_odd(char **maze, int xmax, int ymax, int index_y)
{
    while (index_y < ymax){
        if (xmax % 2 == 1) {
            make_a_way_even(maze, xmax, index_y);
        } else {
            make_a_way_odd(maze, xmax, index_y);
        }
        index_y += 2;
    }
    return maze;
}

char **make_a_way_even(char **maze, int const xmax, int index_y)
{
    int index_x = 2;

    while (index_x <= xmax) {
        maze[index_y][index_x] = '*';
        if ((rand() % 2) == 1) {
            maze[index_y][index_x - 1] = '*';
        } else {
            maze[index_y - 1][index_x] = '*';
        }
        index_x = index_x + 2;
    }
    return maze;
}

char **make_a_way_odd(char **maze, int const xmax, int index_y)
{
    int index_x = 2;

    while (index_x <= xmax - 1) {
        maze[index_y][index_x] = '*';
        if ((rand() % 2) == 1) {
            maze[index_y][index_x - 1] = '*';
        } else {
            maze[index_y - 1][index_x] = '*';
        }
        index_x = index_x + 2;
    }
    return maze;
}
