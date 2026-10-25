#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*int	main()
{
	char	p[7] = "kkkk";
	ft_memset(p, 'g', 4);
	printf("%s\n", p);
}*/
