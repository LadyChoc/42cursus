/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:59:01 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 13:59:04 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*str1;
	const char	*str2 = src;

	i = 0;
	str1 = dest;
	while (i <= n -1)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
/*
int main ()
{
	const char src[50] = "Byeee!!";
	char dest[50];
	strcpy(dest,"Helloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, 20);
	printf("After memcpy dest = %s\n", dest);

	const char src1[50] = "Byeee!!";
	char dest1[50];
	strcpy(dest1,"Helloooo!!");
	printf("Before ft_memcpy dest = %s\n", dest1);
	ft_memcpy(dest1, src1, 20);
	printf("After ft_memcpy dest = %s\n", dest1);
	return(0);
}
*/