#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	char_c;
	char	*found;
	
	char_c = (char)c;
	found = NULL;
	while (*s)
	{
		if (*s == char_c)
		{
			found = (char *)s;
		}
		s++;
	}
	if (char_c == 0)
	{
		return ((char *)s);
	}
	return (found);
}		
