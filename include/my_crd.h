/*
** ETNA PROJECT, 01/04/2021 by aouam_a
** my_crd
** File description:
**      [...]
*/

#ifndef __MY_CRD_H__
# define __MY_CRD_H__

typedef struct s_tab 
{
    char *key;
    char *value;
    struct s_tab *next;
} t_tab;

void my_putchar(char c);
char *my_readline(void);
void my_putstr(const char *str);
int my_strcmp(const char *s1, const char *s2);
char **my_str_to_word_array(char const *str);
int tab_length(char **str);
int is_positive_nbr(char *a);
void consultation(char *key);
void insertion(char *key, char *value);
void suppression(char *key);
void affiche_ligne(char *str);
void add_elem(t_tab *list, char *key, char *value);
t_tab *init_list(char *key, char * value);

#endif
