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
#include <string.h>
#include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char test [] = "Esto es un 7est.";
	printf("Con ft_strchr: %s \n", ft_strchr(test, '.'));
	printf("Con strchr: %s \n", strchr(test, '.'));
}
*/