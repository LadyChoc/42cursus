/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:18:51 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 18:18:53 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*uns1;
	unsigned char	*uns2;

	i = 0;
	uns1 = s1;
	uns2 = s2;
	while (i < n)
	{
		if (uns1[i] != uns2[i])
			return (uns1[i] - uns2[i]);
		i++;
	}
	return (0);
}
/*
int	main ()
{
	char *s1 = "esta ";
	char *s2 = "esto ";
	printf("Con ft_memcmp: %d\n", ft_memcmp(s1, s2, 5));
	printf("Con memcmp: %d\n", memcmp(s1, s2, 5));
	return (0);
}
*/