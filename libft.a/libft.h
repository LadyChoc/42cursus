/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:38:03 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 18:38:05 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(char const *str);
void			*ft_memset(void *str, int c, unsigned long n);
void			ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dest, void *src, unsigned long n);
void			*ft_memmove(void *str1, void *str2, unsigned long n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr( char *s, int c);
char			*ft_strrchr(char *s, int c);
int				ft_strncmp( char *s1, char *s2, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
int				ft_memcmp( void *s1, void *s2, size_t n);
char			*ft_strnstr(char *str, char *to_find, size_t len);
int				ft_atoi(char *str);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(char *s);
char			*ft_substr(char *s, unsigned int start, size_t len);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strtrim(char *s1, char *set);
char			**ft_split(char *s, char c);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strmapi(char *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif