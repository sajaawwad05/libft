#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}
/*int main()
{
	char	*s1 = "a";
	char	*s2 = "ab";
	int	d = ft_strncmp(s1, s2, 1);
	printf("%d\n", d);
}*/
