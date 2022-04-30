/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** dante
*/

#ifndef DANTE_H_
    #define DANTE_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/stat.h>

    char **find_dead_ends(char **maze, int xmax, int ymax, int index_y);
    char **fill_dead_ends(char **maze, int const ymax, int const xmax);
    char **absolute_path(char **maze, int const ymax, int const xmax);
    char **final_path(char **maze, int const ymax, int const xmax);
    char **check_rim(char **maze, int const ymax, int const xmax);
    void print_maze(char **maze, int const ymax, int const xmax);
    int check_end(char **maze, int const ymax, int const xmax);
    char **fill_cross(char **maze, int index_y, int index_x);
    char **fill_fill(char **maze, int index_y, int index_x);
    char **fill_end(char **maze, int index_y, int index_x);
    char **rim_dead_ends(char **maze, int xmax, int ymax);
    char **find_cross(char **maze, int ymax, int xmax);
    char **get_maze(char const *path);
    int my_maze_hight(char **maze);
    int my_strlen(char const *str);
    char **prep_final(char **maze);
    int solver(char const *path);

#endif
