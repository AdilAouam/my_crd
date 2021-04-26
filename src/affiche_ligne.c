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

void affiche_ligne(char *str)
{
    char **tab = my_str_to_word_array(str);
    t_tab *list = init_list(tab[0], tab[1]);
    if (tab_length(tab) == 2 && (my_strcmp(tab[1], "D") == 0) && is_positive_nbr(tab[0]))
    {
        suppression(tab[0]);
    }
    else if (tab_length(tab) == 2 && is_positive_nbr(tab[0]) && is_positive_nbr(tab[1]))
    {
        add_elem(list, tab[0], tab[1]);
        my_putstr(tab[0]);
        my_putstr("\n");
    }
    else if (tab_length(tab) == 1 && is_positive_nbr(tab[0]))
    {
        consultation(tab[0]);
    }
    else 
    {
        my_putstr("La ligne est invalide\n");
    }
}
