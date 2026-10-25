#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_char;
	unsigned char		*dest_char;

	if (n == 0)
		return (dest);
	if(!dest || !src)
		return (NULL);
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
/*int main ()
{
	int	s = 222;
	int	d = 0;
	ft_memmove(&d, &s, 3);
	printf("%d\n", d);
}*/
