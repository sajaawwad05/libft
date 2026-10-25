#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		if (p[i] == (unsigned char)ch)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*int	main()
{
	char	*str = "ccab";
	char	*r = ft_memchr(str, 'b', 4);
	printf("%s\n", r);
}*/
