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

void suppression(char *key)
{
    my_putstr("je supprime la valeur de la clé ");
    my_putstr(key);
    my_putstr("\n");
}
