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
#include <stddef.h>

int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(int c);
void			*ft_memset(void *str, int c, unsigned long n);
void			ft_bzero(void *s, unsigned long n);
void			*memcpy(void *dest, const void *src, unsigned long n);
void			*ft_memmove(void *str1, const void *str2, unsigned long n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(char *str, char *to_find, size_t len);
int				ft_atoi(char *str);
void			*ft_calloc(size_t nmemb, size_t size);