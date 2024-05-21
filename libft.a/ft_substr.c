#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = malloc(len * sizeof(char));
	i = 0;
	while (start != '\0')
	{
		if (i = len + 1)
		{
			return (str);
		}
		str[i] = s[start];
		i++;
		start++;
	}
	return(NULL);
}

int main ()
{
	char *str = "Esto es una prueba";
	printf("%s\n", ft_substr(str, 3, 7));
	return(0);
}