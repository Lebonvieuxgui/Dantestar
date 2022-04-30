/*
** EPITECH PROJECT, 2021
** my strcmp
** File description:
** compare two strings and returns int indicating the result of the cmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i = i + 1;
    return s1[i] - s2[i];
}
