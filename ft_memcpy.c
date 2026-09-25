#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return NULL;
	size_t	i;
	unsigned char *dest_char;
        dest_char = (unsigned char *)dest;

	const unsigned char *src_char;
        src_char = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
