/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:52:36 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 13:53:14 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 255)
	{
		return (c);
	}
	return (0);
}
/*
int main (void)
{
	int c = ' ';
	printf("%d", ft_isprint(c));
	return(0);
}
*/