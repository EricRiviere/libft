#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
		return (size + src_len);
	i = 0;
	j = dst_len;
	while (src[i]  &&  j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (dst_len + src_len);
}
