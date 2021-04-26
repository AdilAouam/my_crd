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

void add_elem(t_tab *list, char *key, char *value) {
    t_tab *tmp = list;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    t_tab *new = malloc(sizeof(t_tab));
    new->key = key;
    new->value = value;
    new->next = NULL;
    tmp->next = new;
}
