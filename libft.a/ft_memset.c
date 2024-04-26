/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:58:34 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/24 13:58:38 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}
/*
int main (void)
{
	char str[50];
	
	strcpy(str,"This is string.h library function");
	puts(str);
	
	memset(str,'$',7);
	puts(str);

	strcpy(str,"This is string.h library function");
	ft_memset(str,'$',7);
	puts(str);
	
	return(0);
}
*/