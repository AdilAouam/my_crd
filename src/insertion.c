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

void insertion(char *key, char *value)
{
    my_putstr("j'attribue la valeur ");
    my_putstr(value);
    my_putstr(" à la clé ");
    my_putstr(key);
    my_putstr("\n");
}
