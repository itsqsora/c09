# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 14:47:51 by mac               #+#    #+#              #
#    Updated: 2022/08/04 12:00:35 by mac              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -c

SRCDIR = srcs
INCDIR = includes

TARGET = libft.a
SOURCES = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

%.o: %.c
	gcc  $(CFLAGS) $< -o $@ -I $(INCDIR)
	
$(TARGET): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
