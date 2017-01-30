# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/14 07:46:41 by pichrist          #+#    #+#              #
#    Updated: 2017/01/30 03:48:01 by pichrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isprint.o ft_iterative_power.o ft_itoa.o ft_memalloc.o ft_memccpy.o \
	ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memset.o ft_power.o \
	ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
	ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_strcat.o ft_strchr.o \
	ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o \
	ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o \
	ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o \
	ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
	ft_strstr.o ft_strsub.o ft_strtrim.o ft_swap.o ft_tolower.o ft_toupper.o \
	ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o \
	ft_lstmap.o ft_memmove.o ft_abs.o ft_strchrp.o ft_strdupu.o ft_strdupa.o \
	ft_strisalnum.o ft_strisalpha.o ft_strisascii.o ft_isdigit.o \
	ft_strisdigit.o
SRC = $(OBJS:.o=.c)
PATH = .
.PHONY: all fclean re clean

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra $(SRC) -c -I $(PATH)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[1;37mObject files\t\033[1;32m[Created]"
	@echo "\033[1;37mlibft.a\t\t\033[1;32m[Created]"

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;37mObject files\t\033[1;34m[Removed]"

fclean: clean
	@rm -f libft.a
	@echo "\033[1;37mlibft.a\t\t\033[1;34m[Removed]"

re: fclean all
