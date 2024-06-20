#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*pD;
	unsigned char	*pS;
	size_t		i;

	pD = (unsigned char *)dest;
	pS = (unsigned char *)src;
	i = 0;
	
	while (i < len)
	{
		pD[i] = pS[i];
		i++;
	}
	return (dest);
}
