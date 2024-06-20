#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		if (p[i] == (unsigned char)c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (NULL);
}
