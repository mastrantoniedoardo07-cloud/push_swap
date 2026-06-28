NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Elenco dei file sorgente
SRCS = main.c error_management.c disorder.c error_management_two.c\
       sorters/sort_simple.c
	   operations/operations.c operations/operations_two.c operations/operations_three.c

# Converte i .c in .o
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Regola per compilare i .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re