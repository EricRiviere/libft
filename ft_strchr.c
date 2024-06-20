#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_c;
	
	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (char_c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}
