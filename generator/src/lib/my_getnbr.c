/*
** EPITECH PROJECT, 2021
** mygetnbr
** File description:
** returns a number sent to the function as a string
*/

#include "my.h"

int my_getnbr(char const *str)
{
    long nbr = 0;
    int i = 0;
    int negative = 1;

    while (str[i] != '\0') {
        if (str[i] == 45)
            negative = negative * (-1);
        if ((str[i] >= 48) && (str[i] <= 57))
            nbr = nbr + (str[i] - 48);
        if ((str[i + 1] >= 48) && (str[i + 1] <= 57))
            nbr = nbr * 10;
        if ((str[i + 1] < 48 || str[i + 1] > 57) && nbr > 0)
            return (nbr * negative);
        i += 1;
    }
    if (nbr > 2147483646 || nbr < -2147483646)
        return (0);
    return (84);
}
