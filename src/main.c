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

int main() {

    char *str;
    while ((str = my_readline()) != NULL)
    {       
        affiche_ligne(str);
    }
    return 0;
}
