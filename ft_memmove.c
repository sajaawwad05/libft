#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_char;
	unsigned char		*dest_char;

	dest_char = (unsigned char *) dest;
	src_char = (const unsigned char *) src;
	if (dest_char > src_char)
	{
		while (n > 0)
		{
			n--;
			dest_char[n] = src_char[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
int	main()
{
	char	str[10] = "hello";
	char	*p = ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
}
