/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:03:08 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 14:03:09 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main ()
{
	char test [] = "Esto es un test";
	ft_bzero (test, 0);
	printf("%s \n", test);

	char test1 [] = "Esto es un test";
	bzero (test1, 0);
	printf("%s \n", test1);

	ft_bzero (test, 1);
	printf("%s \n", test);

	bzero (test1, 1);
	printf("%s \n", test1);
}
*/