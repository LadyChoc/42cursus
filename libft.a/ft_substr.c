/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:48:50 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:48:53 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if((str = malloc((len + 1) * sizeof(char))) == 0)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return(str);
}

int main ()
{
	char *str = "Esto es una prueba";
	printf("%s\n", ft_substr(str, 1, 15));
	return(0);
}
