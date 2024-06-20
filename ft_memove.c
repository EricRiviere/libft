#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*sr;
	size_t		i;	

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!sr && ! dst)
		return (0);
	if (sr < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst[i] = sr[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
/*
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (d == s)
		return (dest);
	if (s < d && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return dest;
}
*/
