/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:48:09 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:48:11 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char	*str;
	int		slen;

	slen = ft_strlen(s) + 1;
	str = malloc (slen * sizeof(char));
	if(str == 0)
		return (NULL);
	ft_memcpy(str, s, slen);
	return (str);
}
/*
int main (void)
{
	char	*str = "Esto es una prueba";
	printf("Con strdup; %s\n", strdup(str));
	char	*str1 = "Esto es una prueba";
	printf("Con ft_strdup: %s\n", ft_strdup(str1));
	return(0);
}
*/