/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:02:41 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 14:02:43 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
int main ()
{
	int test = '=';
	printf("ft_toupper: %c \n", ft_toupper(test));
	printf("toupper: %c \n", toupper(test));
}
*/