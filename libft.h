/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:26:44 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 19:36:40 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

bool		ft_isalpha(unsigned char c)	__attribute__	((warn_unused_result));
bool		ft_isdigit(unsigned char c)	__attribute__	((warn_unused_result));
bool		ft_isalnum(unsigned char c)	__attribute__	((warn_unused_result));
bool		ft_isascii(unsigned char c)	__attribute__	((warn_unused_result));
bool		ft_isprint(unsigned char c)	__attribute__	((warn_unused_result));
size_t		ft_strlen(const char *s)
			__attribute__	((nonnull,	warn_unused_result));
void		*ft_memset(void *s, unsigned char c, size_t n)
			__attribute__	((nonnull));
void		ft_bzero(void *s, size_t n)	__attribute__	((nonnull));
void		*ft_memcpy(void *destination, const void *source, size_t n)
			__attribute__	((nonnull,	warn_unused_result));
void		*ft_memmove(void *destination, const void *source, size_t n)
			__attribute__	((nonnull));
size_t		ft_strlcpy(char *destination, const char *source, size_t size)
			__attribute__	((nonnull,	warn_unused_result));
size_t		ft_strlcat(char *destination, const char *source, size_t size)
			__attribute__	((nonnull,	warn_unused_result));
char		ft_toupper(char c)	__attribute__	((warn_unused_result));
char		ft_tolower(char c)	__attribute__	((warn_unused_result));
char		*ft_strchr(const char *s, char c)
			__attribute__	((nonnull,	warn_unused_result));
char		*ft_strrchr(const char *s, char c)
			__attribute__	((nonnull,	warn_unused_result));
int			ft_strncmp(const unsigned char *subject,
				const unsigned char *reference, size_t n)
			__attribute__	((nonnull,	warn_unused_result));
void		*ft_memchr(const void *s, unsigned char c, size_t n)
			__attribute__	((warn_unused_result));
int			ft_memcmp(const unsigned char *subject,
				const unsigned char *reference, size_t n)
			__attribute__	((nonnull,	warn_unused_result));
const char	*ft_strnstr(const char *big, const char *little, size_t length)
			__attribute__	((warn_unused_result));
int			ft_atoi(const char *ascii)
			__attribute__	((nonnull,	warn_unused_result));

void		*ft_calloc(size_t member_amount, size_t member_size)
			__attribute__	((warn_unused_result));
char		*ft_strdup(const char *original)
			__attribute__	((nonnull,	warn_unused_result));

char		*ft_substr(const char *superstring, size_t start, size_t length)
			__attribute__	((nonnull,	warn_unused_result));
char		*ft_strjoin(const char *start, const char *end)
			__attribute__	((nonnull,	warn_unused_result));
char		*ft_strtrim(const char *scruffy, const char *blade)
			__attribute__	((nonnull,	warn_unused_result));
char		**ft_split(const char *whole, char delimiter)
			__attribute__	((nonnull,	warn_unused_result));
char		*ft_itoa(int integer)	__attribute__	((warn_unused_result));
char		*ft_strmapi(const char *source, char (*action)(size_t, char))
			__attribute__	((nonnull,	warn_unused_result));
void		ft_striteri(char *string, void (*action)(size_t, const char *))
			__attribute__	((nonnull));
void		ft_putchar_fd(char c, int file_descriptor);
void		ft_putstr_fd(const char *s, int file_descriptor)
			__attribute__	((nonnull));
void		ft_putendl_fd(const char *s, int file_descriptor)
			__attribute__	((nonnull));
void		ft_putnbr_fd(int n, int file_descriptor);

// ///
// My own functions

size_t		ft_strspn(const char *s, const char *accept)
			__attribute__	((nonnull,	warn_unused_result));
//!Alias "character run", "span"
size_t		ft_span(const char *s, const char *set)
			__attribute__	((nonnull,	warn_unused_result));
size_t		ft_strcspn(const char *s, const char *reject)
			__attribute__	((nonnull,	warn_unused_result));
//!Alias "complementary span"
size_t		ft_find(const char *s, const char *any)
			__attribute__	((nonnull,	warn_unused_result));
size_t		ft_rspan(const char *s, const char *set)
			__attribute__	((nonnull,	warn_unused_result));
size_t		ft_rfind(const char *s, const char *any)
			__attribute__	((nonnull,	warn_unused_result));

void		ft_noop(void);
void		ft_vnoop(const void *x);

// ///
// Bonus

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
}	t_node;

t_node		*ft_lstnew(void *content)	__attribute__	((warn_unused_result));
void		ft_lstadd_front(t_node **l, t_node *newbie)__attribute__((nonnull));
size_t		ft_lstsize(t_node *l)	__attribute__	((warn_unused_result));
t_node		*ft_lstlast(t_node *l) __attribute__((nonnull, warn_unused_result));
void		ft_lstadd_back(t_node **l, t_node *newbie) __attribute__((nonnull));
void		ft_lstdelone(t_node *node, void (*cleaner)(const void *))
			__attribute__	((nonnull));
void		ft_lstclear(t_node **l, void (*cleaner)(const void *))
			__attribute__	((nonnull));
void		ft_lstiter(t_node *l, void (*action)(void *))
			__attribute__	((nonnull	(2)));
t_node		*ft_lstmap(const t_node *l, const void*(*action)(const void*),
				void(*cleaner)(const void*))
			__attribute__	((nonnull,	warn_unused_result));
#endif
