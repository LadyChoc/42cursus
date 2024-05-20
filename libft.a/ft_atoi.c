/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:44:13 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 19:44:15 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Calcula el signo del string, ignorando todos los caracteres "espacio" previos
int	calculate_sign(int *index, char *str)
{
	int	j;
	int	i;
	int	res;

	i = *index;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j++;
		}
		i++;
	}
	*index = i;
	res = 1;
	if ((j % 2) != 0)
		res = -1;
	return (res);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = calculate_sign(&i, str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*
int	main(void)
{
	char	*str;

	str = "  -123a";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "    	 	--++++-123a";
	printf("-123\n");
	printf("%d\n", ft_atoi(str));

	str = "    	 	--++++-1y23a";
	printf("-1\n");
	printf("%d\n", ft_atoi(str));

	str = "";
	printf("0\n");
	printf("%d\n", ft_atoi(str));

	str = "    	";
	printf("0\n");
	printf("%d\n", ft_atoi(str));

	str = "v5";
	printf("0\n");
	printf("%d\n", ft_atoi(str));

	str = "-v";
	printf("0\n");
	printf("%d\n", ft_atoi(str));

	str = "-";
	printf("0\n");
	printf("%d\n", ft_atoi(str));
}
*/