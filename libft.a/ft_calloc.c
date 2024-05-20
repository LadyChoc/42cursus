/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:46:04 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 19:46:06 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	int		i;

	i = 0;
	if (nmemb != 0 && size != 0)
	{
		arr = malloc (nmemb * size);
		arr = ft_bzero(arr, nmemb * size);
		return (arr);
	}
	return (NULL);
}