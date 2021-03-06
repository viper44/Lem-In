/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:05:16 by msemenov          #+#    #+#             */
/*   Updated: 2017/11/15 10:44:18 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <get_next_line.h>

typedef struct		s_var
{
	int				i;
	int				o;
	int				n;
	int				m;
	int				k;
	int				p;
}					t_var;
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
typedef struct		s_pack
{
	int				o;
	int				count;
	int				n;
	int				m;
}					t_pack;
size_t				ft_strlen(const char *str);
void				ft_bzero(void *b, size_t lenght);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *src, int c, size_t lenght);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcmpy(void *out, const void *in, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t length);
void				*ft_memset(void *memptr, int val, size_t num);
char				*ft_strdup(const char *str);
int					ft_atoi(const char *s1);
void				*ft_memcpy(void *iut, const void *in, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *string, int c);
int					ft_strcmp(const char *a, const char *b);
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strncat(char *dst, const char *sr, size_t length);
int					ft_strncmp(const char *a, const char *b, size_t len);
char				*ft_strncpy(char *dst, const char *src, size_t length);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_strrchr(const char *string, int c);
char				*ft_strstr(const char *s1, const char *s2);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin2(char *s1, char *s2, int del);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_find_same(char *big, char *small);
void				ft_w_counter(const char *s);
char				*ft_del_same(char *big, char *small);
int					ft_find_max(int *arr, int len);
int					ft_strnlen(char *s1, size_t n);
int					get_next_line(const int fd, char **line);

#endif
