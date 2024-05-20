/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:59:21 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/03/25 12:59:28 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 255)
	{
		return (c);
	}
	return (0);
}
/*
int main (void)
{
	int c = 300;
	printf("%d", ft_isascii(c));
	return (0);
}
*/