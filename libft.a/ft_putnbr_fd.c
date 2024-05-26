/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:47:45 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/22 18:47:46 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -9)
			ft_putnbr_fd(abs(n / 10), fd);
	}
	if (n > 9)
		ft_putnbr_fd(abs(n / 10), fd);
	ft_putchar_fd('0' + abs(n % 10), fd);
}

/*
int main ()
{
	int num = -5;
	 
	ft_putnbr_fd(num, 0);
	ft_putchar_fd('\n', 0);
	// -2147483648
}
*/
