#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	while(src[src_len])
	{
		src_len++;
	}

	if (dstsize == 0)
		return (src_len);

	size_t	i;

	i = 0;
	while(src[i] && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
