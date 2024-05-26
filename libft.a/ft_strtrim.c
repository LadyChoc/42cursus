/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:48:40 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:48:42 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end]) != 0)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}

/*
int main ()
{
	char* test = "--  -hola --";
	char *set = "- ";

	printf("%s \n", ft_strtrim(test, set));
}
*/