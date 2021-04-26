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

int is_positive_nbr(char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (!(a[i] >= '0' && a[i] <= '9'))
        {
            return 0;
        }
        
        i++;
    }
    return 1;  
}
