/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-gaetan.raux
** File description:
** error
*/
#include "generator.h"

int errors(int const xmax, int const ymax)
{
    if ((ymax == 1) && (xmax == 1)){
        write(1, "*", 1);
        exit(0);
    }
    if (ymax == 1) {
        for (int i = 0; i < xmax; i += 1)
            write(1, "*", 1);
        exit(0);
    }
    if (xmax == 1) {
        for (int i = 0; i < ymax; i += 1)
            write(1, "*\n", 2);
        exit(0);
    }
    return 0;
}
