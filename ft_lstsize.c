#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst -> next;
		size++;
	}
	return (size);
}
/*int main ()
{
	t_list	*list;
	t_list	*list1;
	list = ft_lstnew("hello");
	list1 = ft_lstnew("world");
	list -> next = list1;
	unsigned int d = ft_lstsize(list);
	printf("%d\n", d);
}*/
