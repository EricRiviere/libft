#include "libft.h"
#include <stdlib.h>
char	*ft_strdup(const char *str)
{
	int	str_len;
	char	*dest;
	int	i;
	
	str_len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (str_len + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
