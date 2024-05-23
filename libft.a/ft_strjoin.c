/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:48:19 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:48:21 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char		*str;
	int			i;
	int const	s1_len = ft_strlen(s1);
	int const	s2_len = ft_strlen(s2);

	str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	i = 0;
	ft_memcpy(str, s1, s1_len);
	i += s1_len;
	ft_memcpy((str + i), s2, s2_len);
	i += s2_len;
	str[i] = '\0';
	return (str);
}

/*
int main ()
{
	char *s1 = "Esto es";
	char *s2 = "una prueba";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/