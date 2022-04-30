/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** main
*/

#include "generator.h"

int main(int ac, char const *const *av)
{
    int const xmax = my_getnbr(av[1]);
    int const ymax = my_getnbr(av[2]);

    if (ac == 3)
        errors(xmax, ymax);

    if ((ac != 3 && ac != 4) || !my_str_isnum(av[1]) || !my_str_isnum(av[2]))
        return (84);
    if ((ac == 4 && my_strcmp(av[3], "perfect") != 0))
        return (84);
    if (ac == 4 && my_strcmp(av[3], "perfect") == 0) {
        errors(ymax, xmax);
        return (generator(xmax, ymax));
    }
    else if (ac == 3) {
        return (imperfect_generator(xmax,ymax));
    }
}
