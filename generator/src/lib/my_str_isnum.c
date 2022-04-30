/*
** EPITECH PROJECT, 2021
** mystrisnum
** File description:
** isalpha but with numbers
*/

#include <stddef.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i += 1;
    }
    return (1);
}
