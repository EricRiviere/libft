#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*subst;
	
	subst = ft_strlcpy(*s + start, dest, len);
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	test[] = "hola mundo";
	char	*testDest;
	
	testDest = ft_substr(test, 4, 3);
	printf("subst: %s", testDest);
	return (0);
}
