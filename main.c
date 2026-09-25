#include "libft.h"
#include <stdio.h>
int	main(void)
{
	//printf("%d", ft_isalpha('k'));
	//printf("%d\n", ft_isdigit('l'));
	//printf("%d\n", ft_isalnum('f'));
	//printf("%d\n", ft_isascii('5'));
	//printf("%d\n", ft_isprint('\0'));
	//printf("%ld\n", ft_strlen("stars88"));
	//printf("%c\n", ft_toupper('d'));
	//printf("%c\n", ft_tolower('H'));
	//printf("%s\n", ft_strchr("hi how are u", '\0'));
	//printf("%s\n", ft_strrchr("lala land", 'a'));
	//printf("%d\n", ft_strncmp("hahahtkkl", "hahahtoo", 5));
	char s[10] = "hi there";
	char d[10];
	//ft_memset(s, 'd', sizeof(s));
	//printf("%s\n", s);
	ft_memcpy(d, s, sizeof(s));
	printf("%s\n", s);

	return (0);
}
