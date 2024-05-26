/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:52:42 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/26 16:52:45 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char test [] = "teste";
	printf("Con ft_strchr: %s \n", ft_strchr(test, 'e'));
	printf("Con strchr: %s \n", strchr(test, 'e'));
}
*/