#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t		i;	

	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	i = 0;
	while (*s1 == *s2 && i < len)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
