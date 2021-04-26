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

int tab_length(char **str)
{
    int i = 0;
    while (str[i] != NULL)
    {
        i++;
    }
    return i;
}
