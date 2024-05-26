/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:49:45 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:49:46 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// return the count of c in s
int	str_count_disjoint(char *s, char c)
{
	int		count;
	int		i;
	char	last;

	i = 0;
	count = 0;
	last = c;
	while (s[i] != '\0')
	{
		if (s[i] != c && c == last)
		{
			count++;
		}
		last = s[i];
		i++;
	}
	return (count);
}

int	find_first_ocurrence(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char *s, char c)
{
	int			i;
	int			string_count;
	int			current_index;
	char		**result;
	int			next_index;

	i = 0;
	string_count = str_count_disjoint(s, c);
	result = malloc((string_count + 1) * sizeof(char *));
	if (result == 0)
		return (NULL);
	current_index = 0;
	while (s[current_index] == c)
		current_index++;
	next_index = current_index + find_first_ocurrence(s + current_index, c);
	while (i < string_count)
	{
		result[i++] = ft_substr(s, current_index, next_index - current_index);
		current_index = next_index + 1;
		while (s[current_index] == c)
			current_index++;
		next_index = current_index + find_first_ocurrence(s + current_index, c);
	}
	result[i] = 0;
	return (result);
}

/*
int main ()
{
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
}
*/