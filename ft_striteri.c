#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	ft_shift(unsigned int i, char *str)
{
	(void) i;
	*str+=1;
}
int main()
{

	char	s[] = "abcd";
	ft_striteri(s, ft_shift);
	printf("%s\n", s);
}*/
