#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char* dest_char;
	const unsigned char* src_char;
	size_t	i;
	i = 0;
	if (dest == NULL && src == NULL)
		return 	NULL;

	dest_char = (unsigned char*) dest;
	src_char = (const unsigned char*) src;
	if (dest_char > src_char)
	{
		while (n > 0)
		{
		 	n--;
			dest_char[n] = src_char[n];
		}
	
	}
	else
	{
        	while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}	
	}
	return (dest);
}
