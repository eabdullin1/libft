# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: froxanne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 13:04:24 by froxanne          #+#    #+#              #
#    Updated: 2020/08/02 16:07:44 by froxanne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_lstmap.c \
				ft_ullitoa_base.c \
				ft_abs.c \
				ft_isconver.c \
				ft_isflags.c \
				ft_ismodif.c \
				ft_max.c \
				ft_pow.c \
				ft_print_space.c \
				ft_putchar.c \
				ft_putchars.c \
				ft_putstr.c \
				ft_atof.c \
				ft_isspace.c \
				ft_putendl.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

GCC = clang $(FLAGS) -c

AR = ar rcs $(NAME)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $?

%.o: %.c libft.h
	$(GCC) $< -o $@
	
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
