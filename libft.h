/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:26:44 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 01:21:32 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

bool	ft_isalpha(char c);
bool	ft_isdigit(char c);
bool	ft_isalnum(char c);
bool	ft_isascii(char c);
bool	ft_isprint(char c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, unsigned char c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t n);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(const char *s, char c);
char	*ft_strrchr(const char *s, char c);
int		ft_strncmp(const unsigned char *subject,
			const unsigned char *reference, size_t n);
void	*ft_memchr(const void *s, unsigned char c, size_t n);
int		ft_memcmp(const unsigned char *subject,
			const unsigned char *reference, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t length);
int		ft_atoi(const char *ascii);

void	*ft_calloc(size_t member_amount, size_t member_size);
char	*ft_strdup(const char *original);

char	*ft_substr(const char *superstring, size_t start, size_t length);
char	*ft_strjoin(const char *start, const char *end);
char	*ft_strtrim(const char *scruffy, const char *blade);
char	**ft_split(const char *whole, char delimiter);
char	*ft_itoa(int integer);
char	*ft_strmapi(const char *source, char (*action)(size_t, char));
void	ft_striteri(
			char *string, void (*action)(const size_t, const char *const));
void	ft_putchar_fd(char c, int file_descriptor);
void	ft_putstr_fd(const char *s, int file_descriptor);
void	ft_putendl_fd(const char *s, int file_descriptor);
void	ft_putnbr_fd(int n, int file_descriptor);

// ///
// My own functions

size_t	ft_strspn(const char *s, const char *accept);
//!Alias "character run", "span"
size_t	ft_span(const char *s, const char *set);
size_t	ft_strcspn(const char *s, const char *reject);
//!Alias "complementary span"
size_t	ft_find(const char *s, const char *any);
size_t	ft_rspan(const char *s, const char *set);
size_t	ft_rfind(const char *s, const char *any);

void	ft_noop(void);

// ///
// Bonus

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
}	t_node;

t_node	*ft_lstnew(void *content);
void	ft_lstadd_front(t_node **l, t_node *newbie);
size_t	ft_lstsize(t_node *l);
t_node	*ft_lstlast(t_node *l);
void	ft_lstadd_back(t_node **l, t_node *newbie);
void	ft_lstdelone(t_node *node, void (*cleaner)(void *));
void	ft_lstclear(t_node **l, void (*cleaner)(void *));
void	ft_lstiter(t_node *l, void (*action)(void *));
t_node	*ft_lstmap(t_node *l, void*(*action)(void*), void(*cleaner)(void*));

#endif
