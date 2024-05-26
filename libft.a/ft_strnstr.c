/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:15:07 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 19:15:10 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check_word(char *str, char *to_find, unsigned int i, size_t n)
{
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = i;
	while (k < n && to_find[j] != '\0')
	{
		if (str[k] != to_find[j])
			return (-1);
		j++;
		k++;
	}
	if (to_find[j] == '\0')
		return (0);
	return (-1);
}

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	unsigned int	i;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (i < n && str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			if (check_word(str, to_find, i, n) != -1)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char *s1 = "hoy hey";
	char *s2 = "hey";
	printf("Con strnstr: %s\n", strnstr(s1, s2, 0));
	printf("Con ft_strnstr: %s\n", ft_strnstr(s1, s2, 0));
	return (0);
}
*/