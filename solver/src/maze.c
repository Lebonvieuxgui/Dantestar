/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** maze
*/
#include "solver.h"

static char **create_2d_maze(char *str, char **result)
{
    size_t i = 0;
    size_t index = 0;
    size_t y = 0;

    result[index] = malloc(sizeof(char) * 256);
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            y = 0;
            i = i + 1;
            index = index + 1;
            result[index] = malloc(sizeof(char) * 256);
        }
        result[index][y] = str[i];
        i = i + 1;
        y = y + 1;
    }
    return (result);
}

static int my_print_error_load(void)
{
    write(2, "Error: Failed to open the maze\n", 32);
    exit(84);
}

char **get_maze(char const *path)
{
    struct stat buf;
    int file_size = 0;
    FILE *fd = fopen(path, "r");
    char *file;
    char **maze;

    if (fd == NULL)
        my_print_error_load();
    stat(path, &buf);
    file_size = buf.st_size * 256;
    file = malloc(sizeof(char) * (file_size) + 1);
    fread(file, 1, file_size, fd);
    file[file_size] = '\0';
    if (file == NULL)
        my_print_error_load();
    maze = malloc(sizeof(char *) * 256);
    maze = create_2d_maze(file, maze);
    return (maze);
}

void print_maze(char **maze, int const ymax, int const xmax)
{
    exit (84);
    int i = 0;

    while (i <= ymax - 1) {
        write(1, maze[i], xmax);
        write(1, "\n", 1);
        i = i + 1;
    }
    write(1, maze[i], xmax);
}
