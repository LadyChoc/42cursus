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
#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned int			i;
	char					*str1;
	const char				*str2 = src;

	i = 0;
	str1 = dest;
	if (dest == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
/*
int main ()
{
	 char src[50] = "Byeee!!";
	char dest[50];
	strcpy(dest,"Helloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, 20);
	printf("After memcpy dest = %s\n", dest);

	 char src1[50] = "Byeee!!";
	char dest1[50];
	strcpy(dest1,"Helloooo!!");
	printf("Before ft_memcpy dest = %s\n", dest1);
	ft_memcpy(dest1, src1, 20);
	printf("After ft_memcpy dest = %s\n", dest1);
	return(0);
}
*/