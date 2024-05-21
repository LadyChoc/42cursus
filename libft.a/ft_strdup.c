#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char	*str;

	str = malloc (ft_strlen(s) + 1 * sizeof(char));
	ft_memcpy(str, s, ft_strlen(str));
	return (str);
}

int main (void)
{
	char	*str = "Esto es una prueba";
	printf("Con strdup; %s\n", ft_strdup(str));
	char	*str1 = "Esto es una prueba";
	printf("Con ft_strdup: %s\n", ft_strdup(str1));
	return(0);
}
