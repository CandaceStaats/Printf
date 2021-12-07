# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cstaats <cstaats@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/01 08:30:46 by cstaats       #+#    #+#                  #
#    Updated: 2021/12/02 13:26:36 by cstaats       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = dandi.c ft_printf.c bandersnatch.c percent.c unsignedd.c middleman.c chars.c strprint.c uphex.c vp.c lowhex.c 


OBS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBS)
	ar crs $(NAME) $(OBS)

%.o: %.c libftprintf.h
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test: all
	gcc main.c -L. -lftprintf 
	./a.out
