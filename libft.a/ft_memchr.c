/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:10:54 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 18:11:51 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*memchr(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*uns;

	*uns = s;
	i = 0;
	while (i <= n)
	{
		if (uns[i] == (unsigned char)c)
			return (uns + i);
		i++;
	}
	return (NULL);
}

int main ()
{
	
}
