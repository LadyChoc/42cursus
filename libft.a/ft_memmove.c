/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:57:17 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 13:57:39 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int			i;
	char		*dest;
	const char	*src = str2;

	i = 0;
	dest = str1;
	if (!src)
		return (dest);
	if (src > dest)
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	else
	{
		while (n > 0)
		{
			n--;
			dest[n] = src[n];
		}
	}
	return (dest);
}
/*
int main () {
	// Que n sea más grande que src/dest
	char dest[]  = "oldstring";
	const char src[]  = "newstring";

	printf("Before ftmemmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 30);
	printf("After ftmemmove dest = %s, src = %s\n", dest, src);

	char dest1[]  = "oldstring";
	printf("Before memmove dest = %s, src = %s\n", dest1, src);
	memmove(dest1, src, 10);
	printf("After memmove dest = %s, src = %s\n", dest1, src);

	// Que src y dest estén solapadas
	printf("\n\n\n");
	char src2[] = "hola mundo";
	char *dest2 = src2 + 5; // mundo

	printf("Before memmove dest = %s, src = %s\n", dest2, src2);
	memmove(dest2, src2, 4);
	printf("After memmove dest = %s, src = %s\n", dest2, src2);
	
	char src3[] = "hola mundo";
	dest2 = src3 + 5;

	printf("Before ftmemmove dest = %s, src = %s\n", dest2, src3);
	ft_memmove(dest2, src3, 4);
	printf("After ftmemmove dest = %s, src = %s\n", dest2, src3);
	
	// Que src/dest estén vacías
	printf("\n\n\n");
	char src4[] = "hola mundo";
	char *dest4 = src4 + 5; // mundo

	char* empty;
	printf("src vacio\n");
	if (memmove(dest4, empty, 4) == dest4) {
		printf("giaul\n");
	}
	printf("vacio\n");
	memmove(empty, empty, 4);

	return(0);
}
*/
