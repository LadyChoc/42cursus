/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:01:31 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 14:01:33 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < (size - 1))
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main (void)
{
    char* src = "hola mundo";
    char* dst = malloc(sizeof(char) * 20);
	char* dst2 = malloc(sizeof(char) * 20);
    printf("%lu\n", strlcpy(dst, src, 15));
    printf("%s\n\n", dst);

	printf("%x\n", ft_strlcpy(dst2, src, 15));
    printf("%s\n", dst);

	src = "hola";
	printf("%lu\n", strlcpy(dst, src, 2));
    printf("%s\n", dst);
	printf("%s\n\n", &dst[4]);

	printf("%x\n", ft_strlcpy(dst2, src, 2));
	printf("%s\n", dst);
	printf("%s\n\n", &dst[4]);
    return (0);
}
*/