#include "libft.h"

int	ft_memcmp(const	void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char	*s1 = "helloJ";
	char	*s2 = "helloj";
	int	d = ft_memcmp(s1, s2, 0);
	printf("%d\n", d);
}*/
