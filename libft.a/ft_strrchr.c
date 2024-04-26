/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:28:30 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/04/26 17:28:32 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strrchr(char *s, int c)
{
    int i;
    int p;

    char* result;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            p = i;
        i++;
    }
    if (p)
        return(s + i);
    else
        return(NULL);
}

int main ()
{
    char test [] = "Esto es un tester.";
    printf("Con ft_strrchr: %s \n", ft_strrchr(test, 'e'));
    printf("Con strrchr: %s \n", strrchr(test, 'e'));
}