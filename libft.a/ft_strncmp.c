/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:09:36 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 18:09:52 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				r;

	if (n <= 0)
	{
		return (0);
	}
	i = 0;
	while (i < (n - 1) && s1[i] != '\0'
		&& s2[i] != '\0')
	{
		r = s1[i] - s2[i];
		if (r != 0)
		{
			return (r);
		}
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
