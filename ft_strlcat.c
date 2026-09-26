#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;

	while (dst_len < dstsize && dest[dst_len])
		dst_len++;

	while (src[src_len])
		src_len++;
	
	if (dst_len == dstsize)
		return dstsize + src_len;

	i = 0;
	while (src[i] && (dst_len + i + 1) < dstsize)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';

	return (dst_len + src_len);
}

