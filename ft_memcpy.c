#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_char;
	unsigned char		*dest_char;
	size_t				i;

	dest_char = (unsigned char *)dest;
	src_char = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	char	s[10] = "saja112";
	char	d[10];
	ft_memcpy(d, s, 6);
	printf("%s\n", d);
	printf("%s\n", s);
}*/
