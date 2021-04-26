/*
** ETNA PROJECT, 01/04/2021 by aouam_a
** my_crd
** File description:
**      [...]
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_crd.h"

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int r = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i]!= '\0')
    {
        i++;
    }
    r = s1[i] - s2[i];
    return (r);
}
