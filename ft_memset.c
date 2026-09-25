#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	i = 0;

	unsigned char *s;
	s = str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
