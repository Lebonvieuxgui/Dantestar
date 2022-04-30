/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** dante
*/

#ifndef DANTE_H_
    #define DANTE_H_

#include "my.h"

    char ** fill_first_lines(char **maze, int const ymax, int const xmax);
    char **fill_with_walls(char **maze, int const xmax, int const ymax);
    char **make_a_way_even(char **maze, int const xmax, int const ymax);
    char **allocate_maze(char **maze, int const xmax, int const ymax);
    char **even_or_odd(char **maze, int xmax, int index_y, int ymax);
    char **make_a_way_odd(char **maze, int const xmax, int index_y);
    void print_maze(char **maze, int const xmax, int const ymax);
    int imperfect_generator(int const ymax, int const xmax);
    int generator(int const ymax, int const xmax);
    int my_strcmp(char const *s1, char const *s2);
    int errors(int const xmax, int const ymax);
    char **free_map(char **maze, int ymax);
    int my_str_isnum(char const *str);
    int my_getnbr(char const *str);

#endif
