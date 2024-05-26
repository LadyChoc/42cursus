/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:49:56 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:49:57 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	calculate_int_length(int n)
{
	int		length;

	if (n == 0)
		return (1);
	length = 0;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		is_negative;
	int		number_size;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	number_size = calculate_int_length(n) + is_negative;
	result = malloc((number_size + 1) * sizeof(char));
	if (result == 0)
		return (NULL);
	result[number_size--] = '\0';
	while (number_size >= is_negative)
	{
		result[number_size--] = '0' + ft_abs(n % 10);
		n = n / 10;
	}
	if (is_negative == 1)
	{
		result[number_size] = '-';
	}
	return (result);
}

/*
int main ()
{
	int num = -5;
	printf("%s\n", ft_itoa(num));
	// -2147483648
}
*/