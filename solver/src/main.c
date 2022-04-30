/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** main
*/

#include "solver.h"

int main(int const ac, char const * const *av)
{
    if (ac != 2) {
        write(2, "Error: no path to maze\n", 24);
        exit(84);
    }
    return (solver(av[1]));
}
