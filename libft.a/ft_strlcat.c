/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:01:19 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 14:01:23 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// #include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	initial_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	initial_size = i;
	j = 0;
	while (j + 1 + initial_size < size && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (src[j] != '\0')
		j++;
	dest[i] = '\0';
	if (size > initial_size)
		return (j + initial_size);
	return (j + size);
}
/*
int main ()
{
	char dest [40] = "";
	char src [] = "un tester";
	ft_strlcat(dest, src, 20);
	printf("Con ft_strlcat: %s, %s \n", dest, src);

	char dest1 [40] = "";
	char src1 [] = "un tester";
	strlcat(dest1, src1, 20);
	printf("Con strlcat: %s, %s \n", dest1, src1);
}
*/