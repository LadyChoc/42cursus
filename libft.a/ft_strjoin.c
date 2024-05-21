#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;

	str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	i = 0;
	ft_memcpy(str[i], s1, ft_strlen(s1));
	i = ft_strlen(str) + 1;
	ft_memcpy(str[i], s2, ft_strlen(s2));
	i = ft_strlen(str) + 1;
	ft_memcpy(str[i], '\0', 1);
	return(str);
}