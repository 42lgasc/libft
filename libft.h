/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:26:44 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/16 17:24:29 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
size_t	ft_strlen(const char *string);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t n);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *string, int character);
char	*ft_strrchr(const char *string, int character);
int		ft_strncmp(const char *string1, const char *string2, size_t n);
void	*ft_memchr(const void *s, int character, size_t n);
int		ft_memcmp(const void *string1, const void *string2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t length);
int		ft_atoi(const char *string);

void	*ft_calloc(size_t member_amount, size_t member_size);
char	*ft_strdup(const char *original);

char	*ft_substr(char const *superstring, unsigned int start, size_t length);
char	*ft_strjoin(char const *string1, char const *string2);
char	*ft_strtrim(char const *scruffy, char const *blade);
char	**ft_split(char const *whole, char delimiter);
char	*ft_itoa(int integer);
char	*ft_strmapi(char const *original, char (*function)(unsigned int, char));
void	ft_striteri(char *string, void (*function)(unsigned int, char *));
void	ft_putchar_fd(char character, int file_descriptor);
void	ft_putstr_fd(char *string, int file_descriptor);
void	ft_putendl_fd(char *string, int file_descriptor);
void	ft_putnbr_fd(int integer, int file_descriptor);

/*~~ ~ -  BONUS - ~ ~~*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **list, t_list *new);
int		ft_lstsize(t_list *list);
t_list	*ft_lstlast(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstdelone(t_list *node, void (*deleter)(void *));
void	ft_lstclear(t_list **node, void (*deleter)(void *));
void	ft_lstiter(t_list *list, void (*function)(void *));
t_list	*ft_lstmap(
			t_list *list, void *(*function)(void *), void (*deleter)(void *));

#endif
