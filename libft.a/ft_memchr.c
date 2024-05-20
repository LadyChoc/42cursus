/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarroyo- <sarroyo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:10:54 by sarroyo-          #+#    #+#             */
/*   Updated: 2024/05/20 18:11:51 by sarroyo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

//For main
#include <stdio.h>
#include <string.h>

void *ft_memchr(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*uns;

	uns = s;
    i = 0;
    while(i < n)
    {
        if (uns[i] == (unsigned char)c)
            return(uns + i);
        i++;
    }
    return (NULL);
}

int main ()
{
    char * test = "hola";

	// Busca la primera letra
    printf("Original: %s\n", (char*) memchr(test, 'h', 5));
    printf("FT: %s\n", (char*) ft_memchr(test, 'h', 5));
	// Busca la ultima letra
    printf("Original: %s\n", (char*) memchr(test, 'a', 5));
	printf("FT: %s\n", (char*) ft_memchr(test, 'a', 5));

	// Busca el caracter nulo del string
	printf("Original: %s\n", (char*) memchr(test, '\0', 5));
	printf("FT: %s\n", (char*) ft_memchr(test, '\0', 5));

	// Busca la primera letra pero en 0 espacios
	printf("Original: %s\n", (char*) memchr(test, 'h', 0));
	printf("FT: %s\n", (char*) ft_memchr(test, 'h', 0));

	// Busca una letra que no esta
    printf("Original: %s\n", (char*) memchr(test, 'c', 5));
	printf("FT: %s\n", (char*) ft_memchr(test, 'c', 5));

	char * notInitialized;
	// Busca sin estar inciializado
	printf("Original: %s\n", (char*) memchr(notInitialized, 'c', 5));
	printf("FT: %s\n", (char*) ft_memchr(notInitialized, 'c', 5));

	// Busca en null (segmentation fault)
	//printf("Original: %s\n", (char*) memchr(NULL, 'c', 5));
	printf("FT: %s\n", (char*) ft_memchr(NULL, 'c', 5));

}
