#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;
	
	dest = malloc(number * size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, number * size);
	return (dest);
}
