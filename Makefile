# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgasc <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 17:30:49 by lgasc             #+#    #+#              #
#    Updated: 2024/07/16 22:48:52 by lgasc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# #### ### ## #  === == =  ~~ ~  - VARIABLES= -  ~ ~~  = == ===  # ## ### #### #

NAME = libft.a

# Special variables
#CC = gcc
CFLAGS += -Wall -Wextra -Werror

#INCLUDES = libft.h

SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c memmove.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c strncmp.c \
	ft_memchr.c memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	calloc.c ft_strdup.c \
	\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c \
	ft_strmapi.c ft_striteri.c \
	put.c \
	\
	span.c noop.c

OBJECTS = $(SOURCES:.c=.o)



# #### ### ## #  === == =  ~~ ~  -  recipes:  -  ~ ~~  = == ===  # ## ### #### #

$(NAME): all ;

all: $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all ;

# The implicit "`.o` from `.c`" rule is used instead.
#$(OBJECTS): $(SOURCE:OBJECTS:.o=.c)
#	cc $(FLAGS) -c $(@:.o=.c) -o $@



# #### ### ## #  === == =  ~~ ~  -   Bonus!   -  ~ ~~  = == ===  # ## ### #### #

BONUS_SOURCES = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)


bonus: $(BONUS_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)



# #### ### ## #  === == =  ~~ ~  -  .SPECIAL  -  ~ ~~  = == ===  # ## ### #### #

.PHONY: all clean fclean re bonus
