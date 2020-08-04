/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:58:31 by froxanne          #+#    #+#             */
/*   Updated: 2020/08/02 16:07:29 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

int						ft_atoi(const char *str);
void					ft_bzero(void *arr, size_t len);
void					*ft_calloc(size_t num, size_t size);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
char					*ft_itoa(int n);
void					*ft_memccpy(void *dst, void *src, int symb, size_t n);
void					*ft_memchr(void *arr, int symb, size_t size);
int						ft_memcmp(void *buf1, void *buf2, size_t count);
void					*ft_memcpy(void *dst, void *src, size_t n);
void					*ft_memmove(void *dst, void *src, size_t n);
void					*ft_memset(void *dst, int c, size_t len);
void					ft_putchar_fd(unsigned char c, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr_fd(char *s, int fd);
char					*ft_strtrim(char const *s1, char const *set);
size_t					ft_strlcat(char *dst, char const *src, size_t size);
char					**ft_split(char const *s, char c);
char					*ft_strchr(char *str, int ch);
int						ft_strcmp(char *str1, char *str2);
char					*ft_strdup(char const *str);
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlcpy(char *dst, char const *src, size_t size);
int						ft_strlen(char const *str);
char					*ft_strmapi(char const *s,
						char (*f)(unsigned int, char));
int						ft_strncmp(char *str1, char *str2, size_t num);
char					*ft_strnstr(char *str1, char *str2, size_t n);
char					*ft_strrchr(char *str, int ch);
char					*ft_strstr(char *str1, char *str2);
char					*ft_substr(char const *str,
						unsigned int start, size_t len);
void					ft_lstadd_back(t_list **lst, t_list *new);
void					ft_lstadd_front(t_list **lst, t_list *new);
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstlast(t_list *lst);
t_list					*ft_lstmap(t_list *lst,
						void *(*f)(void *), void (*del)(void *));
t_list					*ft_lstnew(void *content);
int						ft_lstsize(t_list *lst);
void					ft_putchar(unsigned char c);
void					ft_putstr(char *s);
int						ft_ismodif(char c);
int						ft_isconver(char c);
int						ft_isflags(char c);
int						ft_print_space(int i);
void					ft_putchars(int len, unsigned char c);
char					*ft_ullitoa(unsigned long long num,
								int base, const char *nums);
unsigned long long int	ft_pow(unsigned long long int num, int degree);
int						ft_max(int a, int b);
int						ft_abs(int a);
float					ft_atof(char *str);
int						ft_isspace(int c);
void					ft_putendl(char *str);

#endif
