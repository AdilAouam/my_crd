/*
** ETNA PROJECT, 02/04/2021 by aouam_a
** my_crd
** File description:
**      [...]
*/

#include "my_crd.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_tab *init_list(char *key, char * value) {
    t_tab *list = malloc(sizeof(t_tab));
    list->key = key;
    list->value = value;
    list->next = NULL;

    return list;
}
