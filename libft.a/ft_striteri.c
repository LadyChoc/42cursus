/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:50:16 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:50:17 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void testFunc (unsigned int miInt, char *miChar)
{
    *miChar = 'z';
}

void main() {

	char string [] = "hola";

    ft_striteri(string, testFunc);
	printf("%s\n", string);
}
*/