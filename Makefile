# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/04 11:50:28 by ymarmoud          #+#    #+#              #
#    Updated: 2026/04/05 18:22:10 by ymarmoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIBFT = minilibft

SRCS	= main.c operations/operations.c operations/operations_b.c operations/operations_a.c \
		minilibft/ft_strlen.c \
		minilibft/ft_split.c \
		minilibft/ft_isdigit.c \
		minilibft/ft_substr.c \
		minilibft/ft_strdup.c \
		minilibft/ft_atol.c \
		utils/stack_utils.c \
		utils/extra.c \
		algo/sorting.c
		
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re