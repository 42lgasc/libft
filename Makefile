# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgasc <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 17:30:49 by lgasc             #+#    #+#              #
#    Updated: 2024/07/25 19:31:16 by lgasc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# #### ### ## #  === == =  ~~ ~  - VARIABLES= -  ~ ~~  = == ===  # ## ### #### #

NAME = libft.a

# Special variables
#CC = gcc
CFLAGS += -Wall -Wmissing-noreturn -Werror		\
	-Wnull-dereference -Wstrict-overflow=5 -Wpedantic	\
	-Wattributes -Wmissing-format-attribute -Wnonnull	\
	-Wextra

ifeq ($(CC), gcc)
CFLAGS			+= -Wduplicated-cond -Wsuggest-attribute=const	\
	-Wsuggest-attribute=cold -Wsuggest-attribute=pure	\
	-Wduplicated-branches -Wsuggest-attribute=format	\
	-Wattribute-alias=2 -Wsuggest-attribute=noreturn	\
	-Wsuggest-attribute=malloc -Wstringop-overflow=4

else ifeq ($(CC), clang)
CFLAGS			+= -Wproperty-attribute-mismatch
endif

#INCLUDES = libft.h

SOURCES = \
	is.c \
	strlen.c \
	memset.c bzero.c memcpy.c memmove.c \
	strlcpy.c strlcat.c \
	toupper.c tolower.c \
	strchr.c strrchr.c strncmp.c \
	memchr.c memcmp.c \
	strnstr.c \
	atoi.c \
	calloc.c strdup.c \
	\
	substr.c strjoin.c strtrim.c split.c \
	itoa.c \
	strmapi.c striteri.c \
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
	lstnew.c lstadd_front.c lstsize.c lstlast.c lstadd_back.c lstdelone.c \
	lstclear.c lstiter.c lstmap.c

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)


bonus: $(BONUS_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)



# #### ### ## #  === == =  ~~ ~  -  .SPECIAL  -  ~ ~~  = == ===  # ## ### #### #

.PHONY: all clean fclean re bonus
