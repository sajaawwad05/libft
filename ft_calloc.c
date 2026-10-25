#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
/*int main()
{
	int	*s;
	int	i;

	i = 0;
	s = ft_calloc(5, sizeof(int));
	if (!s)
		return (1);
	while(i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	free(s);
	s = NULL;
}*/
