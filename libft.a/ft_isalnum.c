/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:59:39 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/03/25 12:59:40 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (c);
	}
	return (0);
}
/*
int	main (void)
{
	int c = 57;
	printf("%d", ft_isalnum(c));
    return (0);
}
*/
