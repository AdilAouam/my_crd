##
## ETNA PROJECT, 01/04/2021 by aouam_a
## my_crd
## File description:
##      [...]
##

CC	= gcc

CFLAGS	= -W -Werror -Wall -I./include/

NAME	= my_crd

SRC	= src/main.c \
	  src/my_str_to_word_array.c \
	  src/my_readline.c \
	  src/affiche_ligne.c \
	  src/consultation.c \
	  src/insertion.c \
	  src/is_positive_nbr.c \
	  src/my_putchar.c \
	  src/my_putstr.c \
	  src/my_strcmp.c \
	  src/suppression.c \
	  src/tab_length.c \
	  src/add_elem.c \
	  src/init_list.c

OBJ	= $(SRC:%.c=%.o)

RM	= rm -rf

all:	$(NAME)

$(NAME): $(OBJ)
	 $(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
